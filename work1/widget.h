#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    QWidget w2;
private:
    Ui::Widget *ui;
    void OpenWindow();
    void CloseWindow();

};
#endif // WIDGET_H
