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

    void on_searchByid_clicked();

    void on_searchByname_clicked();

    void on_searchByage_clicked();

    void on_searchByscore_clicked();

    void on_ResetButton_clicked();

    void on_searchBygenus_clicked();

    void on_searchBysex_clicked();

    void on_searchBystatus_clicked();

private:
    Ui::search *ui;
    QSqlTableModel *model;
};

#endif // SEARCH_H
