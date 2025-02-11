// dialog.h
#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>


namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

private slots:
    void registerUser();
    bool loginUser();
    void on_btnOK_clicked();

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private:
    Ui::Dialog *ui;
    QString getFilePath();
    bool userExists(const QString &username);
};

#endif // DIALOG_H
