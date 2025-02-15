/********************************************************************************
** Form generated from reading UI file 'flashcardresult.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLASHCARDRESULT_H
#define UI_FLASHCARDRESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *menuButton;
    QPushButton *nextGameButton;
    QLabel *correctLabel;
    QLabel *incorrectLabel;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(640, 480);
        menuButton = new QPushButton(Form);
        menuButton->setObjectName("menuButton");
        menuButton->setGeometry(QRect(70, 320, 80, 24));
        nextGameButton = new QPushButton(Form);
        nextGameButton->setObjectName("nextGameButton");
        nextGameButton->setGeometry(QRect(190, 320, 80, 24));
        correctLabel = new QLabel(Form);
        correctLabel->setObjectName("correctLabel");
        correctLabel->setGeometry(QRect(70, 230, 71, 16));
        incorrectLabel = new QLabel(Form);
        incorrectLabel->setObjectName("incorrectLabel");
        incorrectLabel->setGeometry(QRect(70, 260, 71, 16));
        label_3 = new QLabel(Form);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 120, 171, 16));
        label_4 = new QLabel(Form);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 140, 171, 16));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        menuButton->setText(QCoreApplication::translate("Form", "Menu", nullptr));
        nextGameButton->setText(QCoreApplication::translate("Form", "Next Game !", nullptr));
        correctLabel->setText(QCoreApplication::translate("Form", "Correct    : X", nullptr));
        incorrectLabel->setText(QCoreApplication::translate("Form", "Incorrect : Y", nullptr));
        label_3->setText(QCoreApplication::translate("Form", " Very Very Good 1 pound fish", nullptr));
        label_4->setText(QCoreApplication::translate("Form", " Very Very Sheep 1 pound fish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHCARDRESULT_H
