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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *changeButton;
    QPushButton *deleteButton;
    QPushButton *searchButton;
    QPushButton *flushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(538, 376);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(widget_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(93, 28));
        addButton->setMaximumSize(QSize(16777215, 28));
        addButton->setAutoFillBackground(true);

        verticalLayout->addWidget(addButton);

        changeButton = new QPushButton(widget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));

        verticalLayout->addWidget(changeButton);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        verticalLayout->addWidget(searchButton);

        flushButton = new QPushButton(widget);
        flushButton->setObjectName(QString::fromUtf8("flushButton"));

        verticalLayout->addWidget(flushButton);


        horizontalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\346\225\260\346\215\256\346\230\276\347\244\272", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\346\226\260\345\242\236\346\225\260\346\215\256", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271\346\225\260\346\215\256", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244\346\225\260\346\215\256", nullptr));
        searchButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276\346\225\260\346\215\256", nullptr));
        flushButton->setText(QCoreApplication::translate("MainWindow", "\345\210\267\346\226\260\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
