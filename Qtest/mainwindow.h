#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QWidget>
#include<QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_show1Button_clicked();

    void on_clear1Button_clicked();

    void on_show2Button_clicked();

    void on_clear2Button_clicked();

    void on_transferButton_clicked();

    void on_exitButton_clicked();

    void on_undoButton_clicked();

    void on_text1Edit_textChanged();

private:
    Ui::MainWindow *ui;
    QString* text1;
    QString* text2;

};
//class MyWidget : public QWidget
//{
//    Q_OBJECT

//public:
//    MyWidget(QWidget *parent = nullptr);
//    ~MyWidget();

//private:
//    Ui::MyWidget *ui;
//};
#endif // MAINWINDOW_H
