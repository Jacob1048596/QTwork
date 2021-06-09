#ifndef NEWW_H
#define NEWW_H

#include <QWidget>
QT_BEGIN_NAMESPACE
namespace Ui { class NewW; }
QT_END_NAMESPACE
class NewW : public QWidget
{
    Q_OBJECT
public:
    explicit NewW(QWidget *parent = nullptr);

signals:
private:
    Ui::NewW *ui;
};

#endif // NEWW_H
