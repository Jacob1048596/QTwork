#ifndef DEL_H
#define DEL_H

#include <QWidget>

namespace Ui {
class del;
}

class del : public QWidget
{
    Q_OBJECT

public:
    explicit del(QWidget *parent = nullptr);
    ~del();

private:
    Ui::del *ui;
};

#endif // DEL_H
