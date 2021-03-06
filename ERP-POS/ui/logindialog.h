#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include <QString>
#include <QMainWindow>

namespace Ui {
class LoginDialog;
}

class LoginDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LoginDialog(QWidget *parent = 0);
    ~LoginDialog();

    static QString staffId;

private slots:
    void on_LoginButton_clicked();

    void on_ExitLoginButton_clicked();

private:
    Ui::LoginDialog *ui;
    QMainWindow *mainwindow;
};

#endif // LOGINDIALOG_H
