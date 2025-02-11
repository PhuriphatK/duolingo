/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *username;
    QLabel *label;
    QLineEdit *password;
    QLabel *label_3;
    QPushButton *btnOK;
    QPushButton *btnCancel;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(455, 187);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 20, 371, 131));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");

        formLayout->setWidget(2, QFormLayout::FieldRole, username);

        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(3, QFormLayout::LabelRole, label);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        password->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(3, QFormLayout::FieldRole, password);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName("label_3");
        label_3->setTextFormat(Qt::TextFormat::AutoText);
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_3);

        btnOK = new QPushButton(Dialog);
        btnOK->setObjectName("btnOK");
        btnOK->setGeometry(QRect(240, 160, 75, 24));
        btnCancel = new QPushButton(Dialog);
        btnCancel->setObjectName("btnCancel");
        btnCancel->setGeometry(QRect(320, 160, 75, 24));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "UserName :", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Password :", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        btnOK->setText(QCoreApplication::translate("Dialog", "OK", nullptr));
        btnCancel->setText(QCoreApplication::translate("Dialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
