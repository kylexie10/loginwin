#ifndef INFOWIN_H
#define INFOWIN_H

#include <QMainWindow>

namespace Ui {
class InfoWin;
}

class InfoWin : public QMainWindow
{
    Q_OBJECT

public:
    explicit InfoWin(QWidget *parent = nullptr);
    ~InfoWin();
    void initWin(QString id,QString name,QString email,QString tel,QString avatar,QString last_login_time,QString current_team_id,QString created_at,QString updated_at,
                 int login_days,int is_send_news,int status);
    QString token;
private slots:
    void on_pushButton_clicked();

private:
    Ui::InfoWin *ui;

};

#endif // INFOWIN_H
