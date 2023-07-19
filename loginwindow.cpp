#include "loginwindow.h"
#include "ui_loginwindow.h"
#include<QRegExpValidator>
#include<QJsonParseError>
#include<QString>
#include<QJsonObject>
#include<QDebug>
#include<QMessageBox>
LoginWindow::LoginWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::LoginWindow)
{

    ui->setupUi(this);
    initWin();
    c=new check();
    accessToken=nullptr;
    infoWin=new InfoWin();

}
LoginWindow::~LoginWindow()
{
    delete ui;
}
//窗口初始化
void LoginWindow::initWin()
{
    ui->loginBtn->setCursor(QCursor(Qt::PointingHandCursor));
    this->setWindowFlag(Qt::FramelessWindowHint); // 设置窗口无边框，设置后窗口无法移动
    ui->usernameEdit->setMaxLength(20);
    ui->passwordEdit->setMaxLength(12);
    ui->passwordEdit->setValidator(new QRegExpValidator(QRegExp("[a-zA-Z0-9]+$")));
    ui->usernameEdit->setPlaceholderText(QStringLiteral("账号/手机号/邮箱号"));
    ui->passwordEdit->setPlaceholderText(QStringLiteral("密码"));
}
//用户信息
void LoginWindow::resInfo(string Response)
{
    //拆分返回结果json
    QJsonParseError jsonError;
    QByteArray baData(Response.c_str(), Response.length());
    QString sData = QString::fromUtf8(baData);
    QByteArray baNewData(sData.toUtf8());
    QJsonDocument document = QJsonDocument::fromJson(baData, &jsonError);
    if (!document.isNull() && (jsonError.error == QJsonParseError::NoError))
    {
        // 解析未发生错误
        if (document.isObject())
        {
            // JSON 文档为对象
            QJsonObject object = document.object();  // 转化为对象
            if (object.contains("id"))
            {
                QJsonValue value = object.value("id");
                if (value.isString()) {
                    QString strId = value.toString();
                    qDebug() << "id : " << strId;
                    id=strId;
                }
            }
            if (object.contains("name"))
            {
                QJsonValue value = object.value("name");
                if (value.isString()) {
                    QString strName = value.toString();
                    qDebug() << "name : " << strName;
                    name=strName;
                }
            }
            if (object.contains("email"))
            {
                QJsonValue value = object.value("email");
                if (value.isString()) {
                    QString strEmail = value.toString();
                    qDebug() << "email : " << strEmail;
                    email=strEmail;
                }
            }
            if (object.contains("tel"))
            {
                QJsonValue value = object.value("tel");
                if (value.isString()) {
                    QString strTel=value.toString();
                    qDebug() << "tel : " << strTel;
                    tel=strTel;
                }
            }
            if (object.contains("avatar"))
            {
                QJsonValue value = object.value("avatar");
                if (value.isString()) {
                    QString strAvatar = value.toString();
                    qDebug() << "avatar : " << strAvatar;
                    avatar=strAvatar;
                }
            }
            if (object.contains("last_login_time"))
            {
                QJsonValue value = object.value("last_login_time");
                if (value.isString()) {
                    QString strLtime = value.toString();
                    qDebug() << "last_login_time : " << strLtime;
                    last_login_time=strLtime;
                }
            }
            if (object.contains("login_days"))
            {
                QJsonValue value = object.value("login_days");
                if (value.toInt()) {
                    int inDay=value.toInt();
                    qDebug() << "login_days : " << inDay;
                    login_days=inDay;
                }
            }
            if (object.contains("is_send_news"))
            {
                QJsonValue value = object.value("is_send_news");
                if (value.toInt()) {
                    int intSen=value.toInt();
                    qDebug() << "is_send_news : " << intSen;
                    is_send_news=intSen;
                }
            }
            if (object.contains("status"))
            {
                QJsonValue value = object.value("status");
                if (value.toInt()) {
                    int intStatus=value.toInt();
                    qDebug() << "status : " << intStatus;
                    status=intStatus;
                }
            }
            if (object.contains("current_team_id"))
            {
                QJsonValue value = object.value("current_team_id");
                if (value.isString()) {
                    QString strCurrentTeamId = value.toString();
                    qDebug() << "current_team_id : " << strCurrentTeamId;
                    current_team_id=strCurrentTeamId;
                }
            }
            if (object.contains("created_at"))
            {
                QJsonValue value = object.value("created_at");
                if (value.isString()) {
                    QString strCreatedAt = value.toString();
                    qDebug() << "created_at : " << strCreatedAt;
                    created_at=strCreatedAt;
                }
            }
            if (object.contains("updated_at"))
            {
                QJsonValue value = object.value("updated_at");
                if (value.isString()) {
                    QString strUpdatedAt = value.toString();
                    qDebug() << "updated_at : " << strUpdatedAt;
                    updated_at=strUpdatedAt;
                }
            }
        }
    }
}
//登陆判定函数
int LoginWindow::CheckFunction(std::string Response)
{
    //拆分返回结果json
    QJsonParseError jsonError;
    QByteArray baData(Response.c_str(), Response.length());
    QString sData = QString::fromUtf8(baData);
    QByteArray baNewData(sData.toUtf8());
    QJsonDocument document = QJsonDocument::fromJson(baData, &jsonError);
    if (!document.isNull() && (jsonError.error == QJsonParseError::NoError))
    {
        // 解析未发生错误
        if (document.isObject())
        {
            // JSON 文档为对象
            QJsonObject object = document.object();  // 转化为对象
            if (object.contains("token_type"))
            {
                QJsonValue value = object.value("token_type");
                if (value.isString()) {
                    QString strType = value.toString();
                    qDebug() << "token_type : " << strType;
                }
            }
            if (object.contains("expires_in"))
            {
                QJsonValue value = object.value("expires_in");
                if (value.toInt())
                {
                    int intExpires=value.toInt();
                    qDebug() << "expires_in : " << intExpires;
                }
            }
            if (object.contains("access_token"))
            {
                QJsonValue value = object.value("access_token");
                if (value.isString())
                {
                    QString strAccess = value.toString();
                    qDebug() << "access_token : " << strAccess;
                    accessToken=strAccess;//获取到token
                }
            }
            if (object.contains("refresh_token"))
            {
                QJsonValue value = object.value("refresh_token");
                if (value.isString())
                {
                    QString strRefresh = value.toString();
                    qDebug() << "refresh_token : " << strRefresh;
                }
            }
            if (object.contains("message"))
            {
                QJsonValue value = object.value("message");
                if (value.isString()) {
                    QString strMessage = value.toString();
                    qDebug() << "message : " << strMessage;
                    if(strMessage=="not find")
                    {
                        qDebug()<<"用户未找到，请重新输入"<<endl;
                        return -1;
                    }
                    else if(strMessage=="login error")
                    {
                        qDebug()<<"密码错误，请重新输入"<<endl;
                        return -2;
                    }
                }
            }else if(accessToken==nullptr)
            {
                return -3;
            }else
            {
                return 0;
            }
        }
    }
}
//登陆按钮
void LoginWindow::on_loginBtn_clicked()
{
    //用户名
    QString uname= ui->usernameEdit->text();
    //密码
    QString pwd=ui->passwordEdit->text();
    if(uname.size()==0||pwd.size()==0)
    {
        QMessageBox::information(this,"提示","用户名或密码不能为空",QMessageBox::Ok);
    }
    else if(uname.size()!=0&&pwd.size()!=0)
    {
        //拼接输入的信息
        QString postStr=QString("{\"username\":\"%1\",\"password\":\"%2\"}").arg(uname).arg(pwd);
        //登陆url
        std::string url="https://saas-api.neuvition.top/api/login";
        //获取用户信息url
        std::string geturl="https://saas-api.neuvition.top/api/info";
        std::string getResponse="";
        //转string
        std::string post=postStr.toStdString();
        //post
        std::string Response=c->curl_post(url,post);
        //打印结果
        //std::cout<<"拼接结果："<<post<<endl;
        //std::cout<<"返回结果："<<Response<<endl;
        //登陆判定
        int ret=CheckFunction(Response);
        if(ret==0)
        {
            QMessageBox::information(this,"提示","登陆成功",QMessageBox::Ok);
            QString s="Bearer "+accessToken;
            std::string stH=s.toStdString();
            getResponse=c->curl_get(geturl,stH);
            resInfo(getResponse);
            //用户信息发送给信息显示窗口
            infoWin->token=accessToken;
            infoWin->initWin(id,name,email,tel,avatar,last_login_time,current_team_id,created_at,updated_at,login_days,is_send_news,status);
            infoWin->show();
            this->close();
        }else if(ret==-1)
        {
            QMessageBox::warning(this,"提示","用户未找到，请重新输入",QMessageBox::Ok);
        }else if(ret==-2)
        {
            QMessageBox::warning(this,"提示","密码错误，请重新输入",QMessageBox::Ok);
        }else if(ret==-3)
        {
            QMessageBox::warning(this,"提示","发生未知错误，请重试",QMessageBox::Ok);
        }
    }
}
//关闭窗口按钮
void LoginWindow::on_quitBtn_clicked()
{
    this->close();
}
//最小化按钮
void LoginWindow::on_minimizeBtn_clicked()
{
    this->showMinimized();
}

//无边框移动
void LoginWindow::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
        clickPos=e->pos();
}
void LoginWindow::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton  //左键点击并且移动
                && e->pos().x()>=0      //范围在窗口的上面部分
                && e->pos().y()>=0
                && e->pos().x()<= geometry().width()
                && e->pos().y() <= geometry().height()/10)
        {
            move(e->pos()+pos()-clickPos);  //移动窗口
        }
}


