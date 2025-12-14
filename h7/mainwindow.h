#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnCount_clicked();  // Count-napin slot
    void on_btnReset_clicked();  // Reset-napin slot

private:
    Ui::MainWindow *ui;
    int counter = 0;             // laskuri

    void updateUi();             // apufunktio tekstien päivittämiseen
};

#endif // MAINWINDOW_H
