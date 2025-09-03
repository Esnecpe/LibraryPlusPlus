/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TypeHere
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TypeHere)
    {
        if (TypeHere->objectName().isEmpty())
            TypeHere->setObjectName("TypeHere");
        TypeHere->resize(800, 600);
        centralwidget = new QWidget(TypeHere);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(350, 230, 131, 81));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(290, 140, 131, 51));
        TypeHere->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TypeHere);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        TypeHere->setMenuBar(menubar);
        statusbar = new QStatusBar(TypeHere);
        statusbar->setObjectName("statusbar");
        TypeHere->setStatusBar(statusbar);

        retranslateUi(TypeHere);

        QMetaObject::connectSlotsByName(TypeHere);
    } // setupUi

    void retranslateUi(QMainWindow *TypeHere)
    {
        TypeHere->setWindowTitle(QCoreApplication::translate("TypeHere", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("TypeHere", "Click Me!", nullptr));
        label->setText(QCoreApplication::translate("TypeHere", "Touch if you Dare", nullptr));
    } // retranslateUi

};

namespace Ui {
class TypeHere: public Ui_TypeHere {private slots:
    void on_pushButton_clicked();
};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
