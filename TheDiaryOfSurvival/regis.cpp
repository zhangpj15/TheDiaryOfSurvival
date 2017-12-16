#include "regis.h"
#include "ui_regis.h"

regis::regis(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::regis)
{
    /*各控件初始化*/
    ui->setupUi(this);
    setWindowTitle("Login");

    QRegExp regExp("^[A-Za-z0-9_]+$");//设置输入正则式,可以输入包含大小写字母，阿拉伯数字以及下划线
    QRegExpValidator *pRegExpValidator = new QRegExpValidator(regExp,this);
    ui->usernameline->setValidator(pRegExpValidator);
    ui->passwordline->setValidator(pRegExpValidator);
    ui->rPasswordline->setValidator(pRegExpValidator);

    ui->passwordline->setEchoMode(QLineEdit::Password);
    ui->rPasswordline->setEchoMode(QLineEdit::Password);

    /*设置槽*/
    connect(ui->checkButton,SIGNAL(clicked()),this,SLOT(checkButtonClicked()));
    connect(ui->loginButton,SIGNAL(clicked()),this,SLOT(loginButtonClicked()));
    connect(ui->loadButton,SIGNAL(clicked()),this,SLOT(loadButtonClicked()));
    connect(ui->returnButton,SIGNAL(clicked()),this,SLOT(slot_returnButton()));



    /*数据库初始化*/
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");  //Qt访问mysql驱动的关键字
    db.setHostName("39.106.151.114");
    db.setPort(3306);
    db.setDatabaseName("duser");
    db.setUserName("root");
    db.setPassword("986528");//数据库的登陆密码，可改
    //db.open();
    if (!db.open()) {
        QMessageBox::information(this,tr("Cannot open database"),
                                 tr("Unable to establish a database connection."), QMessageBox::Cancel);
       }
    else{
        qDebug() <<"open database successed"<<endl;
    }

}

void regis::checkButtonClicked(){//检查用户名是否可用
   QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//字库编码
   QString name = ui->usernameline->text();
   QSqlQuery query;
   query.exec("SELECT user_name FROM user_info");
   while (query.next()) {
       QString tempname = query.value(0).toString();
       qDebug()<<tempname<<"  "<<name;
       if(name == tempname){
           QMessageBox::information(this,tr("警告"),
                                    tr("用户名已存在，请修改!!!"));
           return;
       }
   }
   QMessageBox::information(this,tr("恭喜您"),
                            tr("用户名可以注册!!!"));
   return;

}

void regis::loginButtonClicked(){//注册功能

    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//字库编码

    QString name = ui->usernameline->text();
    QString pw1 = ui->passwordline->text();
    QString pw2 = ui->rPasswordline->text();
    QString mail = ui->mailboxline->text();
    QString phone = ui->telline->text();
    QString sex;//性别，可不选
    double pn = ui->telline->text().toDouble();


    if(ui->manradioButton->isChecked()){
        //默认为男
        sex = "M";
    }
    else{
        sex = "F";
    }

    qDebug()<<sex<<endl;

    if(pw1 != pw2){
        ui->passwordline->clear();
        ui->rPasswordline->clear();
        QMessageBox::information(this,tr("警告"),
                                 tr("两次输入的密码不一致，请修改!!!"));
        return;
    }


    if(pn < 10000000000 || pn > 19999999999){
        QMessageBox::information(this,tr("警告"),
                                 tr("手机号码为11位且以1开头，请修改!!!"));
        return;
    }


    if(!mail.contains("@") || !mail.endsWith(".com")){
        QMessageBox::information(this,tr("警告"),
                                 tr("邮箱地址不正确，请修改!!!"));
        return;
    }

    addPerson(name,pw1,sex,mail,phone);

}

void regis::addPerson(const QString name,const QString pw ,const QString sex ,const QString mail ,const QString phone){//向数据库中添加用户信息

    QSqlQuery idquery;
    //获取目前用户数
    idquery.exec("SELECT COUNT(user_id) FROM user_info");
    idquery.next();
    int id=idquery.value(0).toInt()+1;
    //写入新用户数据
    QSqlQuery query;
    QString temp = QObject::tr("insert into user_info(user_id,user_name, password, sex, email, tel) values('%1','%2','%3','%4','%5','%6')")
                            .arg(id)
                            .arg(name)
                            .arg(pw)
                            .arg(sex)
                            .arg(mail)
                            .arg(phone);
     bool isok;
     isok = query.exec(temp);
     if(isok)
    {
        QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));//字库编码
        QMessageBox::information(this,tr("恭喜"),
                              tr("注册成功!!!"));
    }

}

void regis::loadButtonClicked(){//登陆功能
    this->hide();
    emit sig_load();
    //loadwin *dialog = new loadwin();
    //connect(dialog,SIGNAL(sig_loginSuccess()),this,SLOT(slot_loginSuccess()));
    //dialog->show();

}

//void regis::slot_loginSuccess(){//登录成功，关闭注册窗口

    //qDebug()<<"close regis emitted";
//    this->hide();

//    emit sig_close_regis();
//}

void regis::slot_returnButton()
{
    emit sig_returnButton();
}

regis::~regis()
{
    delete ui;
}
