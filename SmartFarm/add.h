#ifndef ADD_H
#define ADD_H

#include <QWidget>

namespace Ui {
class add;
}

class add : public QWidget
{
    Q_OBJECT

public:
    explicit add(QWidget *parent = nullptr);
    ~add();
    // Sql sql;

private slots:
    void on_addButton_clicked();

private:
    Ui::add *ui;
};

#endif // ADD_H
