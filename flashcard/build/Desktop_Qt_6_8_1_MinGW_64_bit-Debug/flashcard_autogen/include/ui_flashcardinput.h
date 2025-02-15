/********************************************************************************
** Form generated from reading UI file 'flashcardinput.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLASHCARDINPUT_H
#define UI_FLASHCARDINPUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_flashcardinput
{
public:
    QWidget *centralwidget;
    QLabel *InputWord;
    QLineEdit *inputWord;
    QLineEdit *inputMeaning;
    QLabel *InputWord_2;
    QPushButton *saveButton;
    QLabel *saveStatus;
    QPushButton *continueButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *flashcardinput)
    {
        if (flashcardinput->objectName().isEmpty())
            flashcardinput->setObjectName("flashcardinput");
        flashcardinput->resize(800, 600);
        centralwidget = new QWidget(flashcardinput);
        centralwidget->setObjectName("centralwidget");
        InputWord = new QLabel(centralwidget);
        InputWord->setObjectName("InputWord");
        InputWord->setGeometry(QRect(80, 50, 71, 21));
        inputWord = new QLineEdit(centralwidget);
        inputWord->setObjectName("inputWord");
        inputWord->setGeometry(QRect(80, 80, 113, 24));
        inputMeaning = new QLineEdit(centralwidget);
        inputMeaning->setObjectName("inputMeaning");
        inputMeaning->setGeometry(QRect(80, 140, 113, 24));
        InputWord_2 = new QLabel(centralwidget);
        InputWord_2->setObjectName("InputWord_2");
        InputWord_2->setGeometry(QRect(80, 110, 81, 21));
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName("saveButton");
        saveButton->setGeometry(QRect(210, 180, 80, 24));
        saveStatus = new QLabel(centralwidget);
        saveStatus->setObjectName("saveStatus");
        saveStatus->setGeometry(QRect(80, 170, 71, 31));
        continueButton = new QPushButton(centralwidget);
        continueButton->setObjectName("continueButton");
        continueButton->setGeometry(QRect(300, 180, 80, 24));
        flashcardinput->setCentralWidget(centralwidget);
        menubar = new QMenuBar(flashcardinput);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        flashcardinput->setMenuBar(menubar);
        statusbar = new QStatusBar(flashcardinput);
        statusbar->setObjectName("statusbar");
        flashcardinput->setStatusBar(statusbar);

        retranslateUi(flashcardinput);

        QMetaObject::connectSlotsByName(flashcardinput);
    } // setupUi

    void retranslateUi(QMainWindow *flashcardinput)
    {
        flashcardinput->setWindowTitle(QCoreApplication::translate("flashcardinput", "flashcardinput", nullptr));
        InputWord->setText(QCoreApplication::translate("flashcardinput", "Input Word", nullptr));
        InputWord_2->setText(QCoreApplication::translate("flashcardinput", "Input Meaning", nullptr));
        saveButton->setText(QCoreApplication::translate("flashcardinput", "Save", nullptr));
        saveStatus->setText(QCoreApplication::translate("flashcardinput", "SaveStatus", nullptr));
        continueButton->setText(QCoreApplication::translate("flashcardinput", "Continue", nullptr));
    } // retranslateUi

};

namespace Ui {
    class flashcardinput: public Ui_flashcardinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHCARDINPUT_H
