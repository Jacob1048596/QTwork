#ifndef CHANGE_H
#define CHANGE_H

#include <QWidget>

namespace Ui {
class change;
}

class change : public QWidget
{
    Q_OBJECT

public:
    explicit change(QWidget *parent = nullptr);
    ~change();

private slots:
    void on_pushButton_clicked();

private:
    Ui::change *ui;
};

#endif // CHANGE_H
