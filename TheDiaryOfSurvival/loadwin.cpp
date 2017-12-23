#include "loadwin.h"
#include "ui_loadwin.h"
#include <QTextCodec>


loadwin::loadwin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::loadwin)
{
    ui->setupUi(this);
    QRegExp regExp("^[A-Za-z0-9_]+$");//设置输入正则式,可以输入包含大小写字母，阿拉伯数字以及下划线
    QRegExpValidator *pRegExpValidator = new QRegExpValidator(regExp,this);
    ui->userline->setValidator(pRegExpValidator);
    ui->pwline->setValidator(pRegExpValidator);
    ui->pwline->setEchoMode(QLineEdit::Password);

    /*设置槽*/
    connect(ui->loadButton,SIGNAL(clicked()),this,SLOT(loadButtonClicked()));
    connect(ui->exitButton,SIGNAL(clicked()),this,SLOT(slot_exitButton()));

    //初始化尝试登录次数
    LoadTimes = 0;

}

void loadwin::loadButtonClicked(){

    if(LoadTimes >= 3)
    {
        QMessageBox::information(this,tr("警告"),
                                   tr("您短期内尝试登录次数过多，请重启游戏进行更多尝试，或联系管理员重置密码!!!"));
        emit sig_exitButton();
        return;
    }

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//字库编码

    QString name = ui->userline->text();
    QString pw = ui->pwline->text();

    if(name == "" || pw == ""){
       QMessageBox::information(this,tr("警告"),
                                  tr("用户名或密码不能为空!!!"));
        return;
    }
      else{
        if(doCheck(name,pw)){
            QMessageBox::information(this,tr("温馨提示"),
                                     tr("登陆成功!!!"));
            LoadTimes = 0;

            this->hide();
            emit sig_loginSuccess();
            return;
             }
            else{
                ui->pwline->clear();
                QMessageBox::information(this,tr("警告"),
                                 tr("用户名或密码错误!!!"));
                LoadTimes += 1;
                return;
                }
           }


}

bool loadwin::doCheck(const QString uname, const QString pw){
    QSqlQuery query;
    query.prepare("SELECT password FROM user_info WHERE user_name = ?");
    query.bindValue(0, uname);
    query.exec();
    query.next();
    QString temppw = query.value(0).toString();
    qDebug()<<temppw<<"  "<<uname;

    //生成密码散列
    QByteArray byteArray;
    byteArray.append(pw);
    QByteArray hash = QCryptographicHash::hash(byteArray, QCryptographicHash::Md5);
    QString strMD5 = hash.toHex();

    if(strMD5 == temppw){
        return true;
    }
    else{
        return false;
    }
}


void loadwin::slot_exitButton()
{
    emit sig_exitButton();
}
loadwin::~loadwin()
{
    delete ui;
}
