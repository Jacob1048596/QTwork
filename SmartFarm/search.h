#ifndef SEARCH_H
#define SEARCH_H

#include <QWidget>
#include<QSqlTableModel>
namespace Ui {
class search;
}

class search : public QWidget
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();

private slots:
    void on_ShowAllButton_clicked();

private:
    Ui::search *ui;
    QSqlTableModel *model;
};

#endif // SEARCH_H
