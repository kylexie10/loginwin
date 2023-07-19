#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QMouseEvent>
#include "check.h"
//信息显示窗口
#include"infowin.h"
namespace Ui {
class LoginWindow;
}

class LoginWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    int CheckFunction(std::string Response);
    void initWin();
    void resInfo(std::string Response);
protected:
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);
private slots:
    void on_minimizeBtn_clicked();

private slots:
    void on_quitBtn_clicked();

private slots:
    void on_loginBtn_clicked();

private:
    Ui::LoginWindow *ui;
    check *c;
    QPoint clickPos;
    InfoWin *infoWin;
    QString accessToken;
    QString id,name,email,tel,avatar,last_login_time,current_team_id,created_at,updated_at,token;
    int login_days,is_send_news,status;
};

#endif // LOGINWINDOW_H
