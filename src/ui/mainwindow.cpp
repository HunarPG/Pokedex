#include "../../include/ui/mainwindow.h"
#include "../../forms/ui_mainwindow.h"
#include <qmessagebox.h>
#include "../../include/ui/aboutpokedex.h"
#include <qfile.h>
#include <qtextstream.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QFile pokemonDatabaseFile("../database/pokemon.txt");
    QTextStream in(&pokemonDatabaseFile);
    pokemonDatabaseFile.open(QFile::ReadOnly | QFile::Text);
    
    for(int i = 0; i<=1024; i++){
        ui->comboBox_Pokemon->addItem(in.readLine());
    }
    pokemonDatabaseFile.close();
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
