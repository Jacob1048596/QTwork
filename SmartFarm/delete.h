#ifndef DELETE_H
#define DELETE_H

#include <QWidget>

namespace Ui {
class delete;
}

class delete : public QWidget
{
    Q_OBJECT

public:
    explicit delete(QWidget *parent = nullptr);
    ~delete();

private:
    Ui::delete *ui;
};

#endif // DELETE_H
