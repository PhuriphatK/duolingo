#include "dialog.h"
#include "ui_dialog.h"
#include <QCoreApplication>
#include <QDir>
#include <QRegularExpression>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->btnOK, &QPushButton::clicked, this, &Dialog::registerUser);
    connect(ui->btnCancel, &QPushButton::clicked, this, &Dialog::reject);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::getFilePath() {
    QString dirPath = QCoreApplication::applicationDirPath() + "/DataUser";
    QDir dir(dirPath);
    if (!dir.exists()) {
        dir.mkpath(".");
    }
    return dirPath + "/users.csv";
}

bool Dialog::userExists(const QString &username) {
    QFile file(getFilePath());
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() > 1 && parts[0] == username) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

void Dialog::registerUser() {
    QString filePath = getFilePath();
    QString username = ui->username->text().trimmed();
    QString passwordInput = ui->password->text();
    QString password = passwordInput.trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "Error", "Username or password cannot be empty!");
        return;
    }
    if (passwordInput != password) {
        QMessageBox::warning(this, "Error", "Password must not contain spaces!");
        return;
    }

    QRegularExpression regex("^[0-9]+$");
    if (!regex.match(password).hasMatch()) {
        QMessageBox::warning(this, "Error", "Password must contain only numbers!");
        return;
    }

    if (userExists(username)) {
        QMessageBox::warning(this, "Error", "User already exists!");
        return;
    }

    QFile file(filePath);
    if (!file.open(QIODevice::Append | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open file!");
        return;
    }

    QTextStream out(&file);
    out << username << "," << password << "\n";
    file.close();

    QMessageBox::information(this, "Success", "User registered successfully!");
    this->accept();
}

bool Dialog::loginUser() {
    QString filePath = getFilePath();
    QString username = ui->username->text().trimmed();
    QString password = ui->password->text().trimmed();

    QFile file(filePath);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Failed to open file!");
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(",");
        if (parts.size() > 1 && parts[0] == username && parts[1] == password) {
            file.close();
            return true;
        }
    }
    file.close();
    return false;
}

void Dialog::on_btnOK_clicked() {
    if (loginUser()) {
        QMessageBox::information(this, "Login Success", "Welcome!");
        this->accept();
    } else {
        QMessageBox::warning(this, "Login Failed", "Invalid username or password!");
    }
}
