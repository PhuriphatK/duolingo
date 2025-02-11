#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"  // เพิ่มคลาส Dialog

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();  // สล็อตสำหรับการคลิกปุ่ม

private slots:
    void openDialog();

private:
    Ui::MainWindow *ui;
    Dialog *dialog;  // เพิ่มตัวแปรสำหรับ Dialog
};


#endif // MAINWINDOW_H
