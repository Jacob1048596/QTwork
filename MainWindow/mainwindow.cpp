#include "mainwindow.h"
#include<QMenuBar>
#include<QToolBar>
#include<QPushButton>
#include<QStatusBar>
#include<QLabel>
#include<QDockWidget>

#include<QTextEdit>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(600,400);
    //菜单栏创建
    QMenuBar* bar=menuBar();
    //菜单栏放到窗口
    setMenuBar(bar);
    //创建菜单
    QMenu* filemenu=bar->addMenu("文件");
    QMenu* editmenu=bar->addMenu("编辑");
    //创建菜单项
   QAction * NewAction =filemenu->addAction("新建");
    //添加分隔符
    filemenu->addSeparator();
    QAction * OpenAction= filemenu->addAction("打开");

    //工具栏，可以有多个
    QToolBar* toolBar=new QToolBar(this);
    addToolBar(Qt::LeftToolBarArea,toolBar);

    //后期设置只允许左右停靠

    toolBar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    toolBar->setFloatable(false);
    //设置移动（总开关）
    //toolBar->setMovable(false);

    //工具栏中设置东西
    toolBar->addAction(NewAction);
    toolBar->addSeparator();
    toolBar->addAction(OpenAction);
    //工具栏中添加控件
    QPushButton* btn=new QPushButton("aaa",this);
    toolBar->addWidget(btn);

    //状态栏，最多一个

    QStatusBar* stBar= statusBar();
    setStatusBar(stBar);
    QLabel* label=new QLabel("提示信息",this);
    stBar->addWidget(label);
    QLabel* label2=new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label2);

    //铆接部件（浮动窗口）可以多个
    QDockWidget* dock=new QDockWidget ("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dock);
    //设置后期停靠范围，只允许上下
    dock->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);


    //设置中心1部件只能一个
    QTextEdit* edit=new QTextEdit (this);
    setCentralWidget(edit);
}

MainWindow::~MainWindow()
{

}

