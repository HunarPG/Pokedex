#include "../include/mainwindow.h"
#include "../forms/ui_mainwindow.h"
#include <qmessagebox.h>
#include "../include/aboutpokedex.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}


void MainWindow::on_actionAbout_Pokedex_triggered()
{
    aboutpokedex newdialog;
    newdialog.setModal(true);
    newdialog.exec();
}
