#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    dialog = new Dialog(this);  // สร้าง Dialog

    // เชื่อมต่อสัญญาณ clicked() ของปุ่มกับสล็อต on_pushButton_clicked()
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::on_pushButton_clicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->close();  // ปิด MainWindow
    dialog->exec();  // แสดง Dialog
}

void MainWindow::openDialog()
{
    Dialog dialog(this);
    if (dialog.exec() == QDialog::Accepted) {
        // ทำสิ่งที่ต้องการเมื่อผู้ใช้ล็อกอินสำเร็จ เช่น เปิดหน้าถัดไป
        QMessageBox::information(this, "Success", "Login Successful!");
    }
}
