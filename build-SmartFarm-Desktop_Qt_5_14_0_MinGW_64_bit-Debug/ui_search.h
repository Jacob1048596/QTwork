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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QPushButton *ShowAllButton;

    void setupUi(QWidget *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(400, 300);
        ShowAllButton = new QPushButton(search);
        ShowAllButton->setObjectName(QString::fromUtf8("ShowAllButton"));
        ShowAllButton->setGeometry(QRect(250, 60, 93, 28));

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QWidget *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "Form", nullptr));
        ShowAllButton->setText(QCoreApplication::translate("search", "\346\230\276\347\244\272\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
