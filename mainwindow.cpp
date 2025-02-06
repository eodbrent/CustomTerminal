#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->splitter->setStretchFactor(0, 4);
    ui->splitter->setStretchFactor(1, 1);


    ui->toolTipArea->setStyleSheet("background-color: #674ea7; color: #999999;");
    ui->output->setStyleSheet("background-color: #444444; color: #999999;");
    ui->input->setStyleSheet("background-color: #999999; color: #444444");
}

MainWindow::~MainWindow()
{
    delete ui;
}
