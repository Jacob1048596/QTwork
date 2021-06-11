/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *addButton;
    QPushButton *flushButton;
    QPushButton *deleteButton;
    QPushButton *changeButton;
    QPushButton *searchButton;
    QTableView *tableView;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(320, 28, 93, 28));
        addButton->setMinimumSize(QSize(93, 28));
        addButton->setMaximumSize(QSize(16777215, 28));
        addButton->setAutoFillBackground(true);
        flushButton = new QPushButton(centralwidget);
        flushButton->setObjectName(QString::fromUtf8("flushButton"));
        flushButton->setGeometry(QRect(320, 440, 93, 28));
        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(320, 234, 93, 28));
        changeButton = new QPushButton(centralwidget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));
        changeButton->setGeometry(QRect(320, 131, 93, 28));
        searchButton = new QPushButton(centralwidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(320, 337, 93, 28));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 30, 256, 441));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "add", nullptr));
        flushButton->setText(QCoreApplication::translate("MainWindow", "flush", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "delete", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "change", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "search", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
