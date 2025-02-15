/********************************************************************************
** Form generated from reading UI file 'flashcardminigame.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FLASHCARDMINIGAME_H
#define UI_FLASHCARDMINIGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QLabel *gameProgress;
    QLabel *wordLabel;
    QLabel *chooseAnswerLabel;
    QLabel *feedbackLabel;
    QPushButton *choice1;
    QPushButton *choice2;
    QPushButton *choice3;
    QPushButton *choice4;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(640, 480);
        gameProgress = new QLabel(Form);
        gameProgress->setObjectName("gameProgress");
        gameProgress->setGeometry(QRect(80, 80, 81, 16));
        wordLabel = new QLabel(Form);
        wordLabel->setObjectName("wordLabel");
        wordLabel->setGeometry(QRect(80, 100, 61, 16));
        chooseAnswerLabel = new QLabel(Form);
        chooseAnswerLabel->setObjectName("chooseAnswerLabel");
        chooseAnswerLabel->setGeometry(QRect(80, 120, 91, 16));
        feedbackLabel = new QLabel(Form);
        feedbackLabel->setObjectName("feedbackLabel");
        feedbackLabel->setGeometry(QRect(90, 290, 61, 16));
        choice1 = new QPushButton(Form);
        choice1->setObjectName("choice1");
        choice1->setGeometry(QRect(80, 150, 80, 24));
        choice2 = new QPushButton(Form);
        choice2->setObjectName("choice2");
        choice2->setGeometry(QRect(80, 180, 80, 24));
        choice3 = new QPushButton(Form);
        choice3->setObjectName("choice3");
        choice3->setGeometry(QRect(80, 210, 80, 24));
        choice4 = new QPushButton(Form);
        choice4->setObjectName("choice4");
        choice4->setGeometry(QRect(80, 240, 80, 24));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        gameProgress->setText(QCoreApplication::translate("Form", "GameProhress", nullptr));
        wordLabel->setText(QCoreApplication::translate("Form", "WordLabel", nullptr));
        chooseAnswerLabel->setText(QCoreApplication::translate("Form", "Choose Answer", nullptr));
        feedbackLabel->setText(QCoreApplication::translate("Form", "FeedBack", nullptr));
        choice1->setText(QCoreApplication::translate("Form", "Choice1", nullptr));
        choice2->setText(QCoreApplication::translate("Form", "Choice2", nullptr));
        choice3->setText(QCoreApplication::translate("Form", "Choice3", nullptr));
        choice4->setText(QCoreApplication::translate("Form", "Choice4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FLASHCARDMINIGAME_H
