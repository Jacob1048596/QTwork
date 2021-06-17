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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_del
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWidget *del)
    {
        if (del->objectName().isEmpty())
            del->setObjectName(QString::fromUtf8("del"));
        del->resize(400, 300);
        pushButton = new QPushButton(del);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 100, 93, 28));
        lineEdit = new QLineEdit(del);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 100, 113, 21));
        label = new QLabel(del);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 60, 141, 16));

        retranslateUi(del);

        QMetaObject::connectSlotsByName(del);
    } // setupUi

    void retranslateUi(QWidget *del)
    {
        del->setWindowTitle(QCoreApplication::translate("del", "\345\210\240\351\231\244\347\225\214\351\235\242", nullptr));
        pushButton->setText(QCoreApplication::translate("del", "\345\210\240\351\231\244", nullptr));
        label->setText(QCoreApplication::translate("del", "\346\240\271\346\215\256id\345\210\240\351\231\244\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class del: public Ui_del {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEL_H
