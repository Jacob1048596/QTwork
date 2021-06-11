#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"change.h"
#include"add.h"
#include"del.h"
#include"search.h"
#include<QSqlTableModel>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    del Delete;
    add Add;
    search Search;
    change Change;
    void SqlConnect();

private slots:
    void on_addButton_clicked();

    void on_deleteButton_clicked();

    void on_changeButton_clicked();

    void on_searchButton_clicked();

    void on_flushButton_clicked();

private:

    Ui::MainWindow *ui;
    QSqlTableModel *model;
};
#endif // MAINWINDOW_H
