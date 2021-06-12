/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QVBoxLayout *verticalLayout_4;
    QTableView *tableView;
    QLabel *label;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idInput;
    QLineEdit *genusInput;
    QLineEdit *ageInput;
    QLineEdit *sexInput;
    QLineEdit *statusInput;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *searchByid;
    QPushButton *searchBygenus;
    QPushButton *searchByage;
    QPushButton *searchBysex;
    QPushButton *searchBystatus;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *ShowAllButton;
    QPushButton *ResetButton;

    void setupUi(QWidget *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(721, 632);
        verticalLayout_4 = new QVBoxLayout(search);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        tableView = new QTableView(search);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout_4->addWidget(tableView);

        label = new QLabel(search);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_4->addWidget(label);

        widget_5 = new QWidget(search);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_2 = new QHBoxLayout(widget_5);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        widget_3 = new QWidget(widget_5);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout = new QHBoxLayout(widget_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget_2 = new QWidget(widget_3);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        idInput = new QLineEdit(widget_2);
        idInput->setObjectName(QString::fromUtf8("idInput"));

        verticalLayout_2->addWidget(idInput);

        genusInput = new QLineEdit(widget_2);
        genusInput->setObjectName(QString::fromUtf8("genusInput"));

        verticalLayout_2->addWidget(genusInput);

        ageInput = new QLineEdit(widget_2);
        ageInput->setObjectName(QString::fromUtf8("ageInput"));

        verticalLayout_2->addWidget(ageInput);

        sexInput = new QLineEdit(widget_2);
        sexInput->setObjectName(QString::fromUtf8("sexInput"));

        verticalLayout_2->addWidget(sexInput);

        statusInput = new QLineEdit(widget_2);
        statusInput->setObjectName(QString::fromUtf8("statusInput"));

        verticalLayout_2->addWidget(statusInput);


        horizontalLayout->addWidget(widget_2);

        widget = new QWidget(widget_3);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        searchByid = new QPushButton(widget);
        searchByid->setObjectName(QString::fromUtf8("searchByid"));

        verticalLayout->addWidget(searchByid);

        searchBygenus = new QPushButton(widget);
        searchBygenus->setObjectName(QString::fromUtf8("searchBygenus"));

        verticalLayout->addWidget(searchBygenus);

        searchByage = new QPushButton(widget);
        searchByage->setObjectName(QString::fromUtf8("searchByage"));

        verticalLayout->addWidget(searchByage);

        searchBysex = new QPushButton(widget);
        searchBysex->setObjectName(QString::fromUtf8("searchBysex"));

        verticalLayout->addWidget(searchBysex);

        searchBystatus = new QPushButton(widget);
        searchBystatus->setObjectName(QString::fromUtf8("searchBystatus"));

        verticalLayout->addWidget(searchBystatus);


        horizontalLayout->addWidget(widget);


        horizontalLayout_2->addWidget(widget_3);

        widget_4 = new QWidget(widget_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        verticalLayout_3 = new QVBoxLayout(widget_4);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        ShowAllButton = new QPushButton(widget_4);
        ShowAllButton->setObjectName(QString::fromUtf8("ShowAllButton"));

        verticalLayout_3->addWidget(ShowAllButton);

        ResetButton = new QPushButton(widget_4);
        ResetButton->setObjectName(QString::fromUtf8("ResetButton"));

        verticalLayout_3->addWidget(ResetButton);


        horizontalLayout_2->addWidget(widget_4);


        verticalLayout_4->addWidget(widget_5);


        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QWidget *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Form", nullptr));
        label->setText(QCoreApplication::translate("search", "\346\240\271\346\215\256\344\270\215\345\220\214\347\247\215\347\261\273\350\277\233\350\241\214\346\237\245\346\211\276", nullptr));
        searchByid->setText(QCoreApplication::translate("search", "id", nullptr));
        searchBygenus->setText(QCoreApplication::translate("search", "\347\247\215\347\261\273", nullptr));
        searchByage->setText(QCoreApplication::translate("search", "\345\271\264\351\276\204", nullptr));
        searchBysex->setText(QCoreApplication::translate("search", "\346\200\247\345\210\253", nullptr));
        searchBystatus->setText(QCoreApplication::translate("search", "\347\212\266\346\200\201", nullptr));
        ShowAllButton->setText(QCoreApplication::translate("search", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
        ResetButton->setText(QCoreApplication::translate("search", "resetID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
