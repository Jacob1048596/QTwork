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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QWidget *widget_7;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QTableView *tableView;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *addButton;
    QPushButton *changeButton;
    QPushButton *deleteButton;
    QPushButton *searchButton;
    QPushButton *flushButton;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(939, 885);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout_3 = new QHBoxLayout(centralwidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        widget_7 = new QWidget(centralwidget);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        verticalLayout = new QVBoxLayout(widget_7);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget_4 = new QWidget(widget_7);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        label_4 = new QLabel(widget_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 5, 1, 1);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(widget_4);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setReadOnly(true);

        gridLayout->addWidget(lineEdit_3, 1, 5, 1, 1);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setReadOnly(true);

        gridLayout->addWidget(lineEdit_2, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 6, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget_2 = new QWidget(widget_7);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        tableView = new QTableView(widget_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_2->addWidget(tableView);


        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        horizontalLayout_3->addWidget(widget_7);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        widget = new QWidget(centralwidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(93, 28));
        addButton->setMaximumSize(QSize(16777215, 28));
        addButton->setAutoFillBackground(true);

        verticalLayout_4->addWidget(addButton);

        changeButton = new QPushButton(widget);
        changeButton->setObjectName(QString::fromUtf8("changeButton"));

        verticalLayout_4->addWidget(changeButton);

        deleteButton = new QPushButton(widget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        verticalLayout_4->addWidget(deleteButton);

        searchButton = new QPushButton(widget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        verticalLayout_4->addWidget(searchButton);

        flushButton = new QPushButton(widget);
        flushButton->setObjectName(QString::fromUtf8("flushButton"));

        verticalLayout_4->addWidget(flushButton);


        horizontalLayout_3->addWidget(widget);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\231\272\346\205\247\347\211\247\345\234\272", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\205\211\347\205\247\357\274\210LUX\357\274\211", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\271\277\345\272\246(hum)", nullptr));
        lineEdit->setText(QCoreApplication::translate("MainWindow", "50", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\270\251\345\272\246(\342\204\203)", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
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
