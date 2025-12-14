#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updateUi();     // alkuarvot labeliin ja lineEditiin
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateUi()
{
    QString s = QString::number(counter);

    ui->txtResult->setText(s);
    ui->labelInfo->setText(
        "Painiketta Count painettu " + s + " kertaa"
        );
}

void MainWindow::on_btnCount_clicked()
{
    ++counter;      // kasvatetaan laskuria
    updateUi();     // päivitä label ja lineEdit
}

void MainWindow::on_btnReset_clicked()
{
    counter = 0;    // nollataan laskuri
    updateUi();     // päivitä label ja lineEdit
}
