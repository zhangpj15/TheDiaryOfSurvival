#include "loadwin.h"
#include "ui_loadwin.h"

loadwin::loadwin(QDialog *parent) :
    QDialog(parent),
    l_ui(new Ui::loadwin)
{
    /*各控件初始化*/
    l_ui->setupUi(this);
    setWindowTitle("Load");

    QRegExp regExp("^[A-Za-z0-9_]+$");//设置输入正则式,可以输入包含大小写字母，阿拉伯数字以及下划线
    QRegExpValidator *pRegExpValidator = new QRegExpValidator(regExp,this);
    l_ui->userline->setValidator(pRegExpValidator);
    l_ui->pwline->setValidator(pRegExpValidator);

    l_ui->pwline->setEchoMode(QLineEdit::Password);

    /*设置槽*/
    connect(l_ui->loadButton,SIGNAL(clicked()),this,SLOT(loadButtonClicked()));


}

void loadwin::loadButtonClicked(){

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//字库编码

    QString name = l_ui->userline->text();
    QString pw = l_ui->pwline->text();

    if(name == "" || pw == ""){
       QMessageBox::information(this,tr("警告"),
                                  tr("用户名或密码不能为空!!!"));
        return;
    }
      else{
        if(doCheck(name,pw)){
            QMessageBox::information(this,tr("温馨提示"),
                                     tr("登陆成功!!!"));
            return;
             }
            else{
                l_ui->pwline->clear();
                QMessageBox::information(this,tr("警告"),
                                 tr("用户名或密码错误!!!"));
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

    if(pw == temppw){
        return true;
    }
    else{
        return false;
    }
}

loadwin::~loadwin()
{
    delete l_ui;
}
