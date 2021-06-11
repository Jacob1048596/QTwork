/********************************************************************************
** Form generated from reading UI file 'del.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEL_H
#define UI_DEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_del
{
public:

    void setupUi(QWidget *del)
    {
        if (del->objectName().isEmpty())
            del->setObjectName(QString::fromUtf8("del"));
        del->resize(400, 300);

        retranslateUi(del);

        QMetaObject::connectSlotsByName(del);
    } // setupUi

    void retranslateUi(QWidget *del)
    {
        del->setWindowTitle(QCoreApplication::translate("del", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class del: public Ui_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
