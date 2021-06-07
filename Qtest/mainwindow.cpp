#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QString>
#include<QPushButton>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->text1Edit->undoAvailable(true);
    ui->text2Edit->undoAvailable(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_show1Button_clicked()
{
    ui->text1Edit->setText("this is a QT string");
}

void MainWindow::on_clear1Button_clicked()
{
   // ui->text1Edit->setText(" ");
   ui->text1Edit->clear();
}

void MainWindow::on_show2Button_clicked()
{
    ui->text2Edit->setText("this is an another Qt string");
}

void MainWindow::on_clear2Button_clicked()
{
    // ui->text2Edit->setText(" ");
    ui->text2Edit->clear();
}

void MainWindow::on_transferButton_clicked()
{
//    ui->text1Edit->copy();
//    ui->text2Edit->paste();
    QString s=ui->text1Edit->toPlainText();
    ui->text2Edit->setText(s);
//    ui->text1Edit->selectAll();
//    ui->text1Edit->copy();
//    ui->text2Edit->paste();
}

void MainWindow::on_exitButton_clicked()
{
    QMainWindow::close();
}

void MainWindow::on_undoButton_clicked()
{

    ui->text1Edit->undo();
    ui->text2Edit->undo();

}

void MainWindow::on_text1Edit_textChanged()
{

}
