#include "infowin.h"
#include "ui_infowin.h"
#include"check.h"
InfoWin::InfoWin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::InfoWin)
{
    ui->setupUi(this);
}

InfoWin::~InfoWin()
{
    delete ui;
}

void InfoWin::initWin(QString id,QString name,QString email,QString tel,QString avatar,QString last_login_time,QString current_team_id,QString created_at,QString updated_at,
int login_days,int is_send_news,int status)
{
    ui->lineEdit->setText(id);
    ui->lineEdit_2->setText(name);
    ui->lineEdit_3->setText(email);
    ui->lineEdit_4->setText(tel);
    ui->lineEdit_5->setText(avatar);
    ui->lineEdit_6->setText(last_login_time);

    ui->lineEdit_7->setText(QString::number(login_days));
    ui->lineEdit_8->setText(QString::number(is_send_news));
    ui->lineEdit_9->setText(QString::number(status));
    ui->lineEdit_10->setText(current_team_id);
    ui->lineEdit_11->setText(created_at);
    ui->lineEdit_12->setText(updated_at);
}

void InfoWin::on_pushButton_clicked()
{
    std::string geturl="https://saas-api.neuvition.top/api/logout";
    std::string getResponse="";
    check *c=new check();
    QString s="Bearer "+token;
    std::string stH=s.toStdString();
    getResponse=c->curl_get(geturl,stH);
    cout<<"getResponse:"<<getResponse<<endl;
    this->close();
}
