#include "../../include/ui/mainwindow.h"
#include "../../forms/ui_mainwindow.h"
#include <qmessagebox.h>
#include "../../include/ui/aboutpokedex.h"
#include <qfile.h>
#include <qtextstream.h>
#include "../../include/ui/bulbasaur.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Opens the pokemon.txt files from database folder and stores it's entire list in a combo box
    QFile pokemonDatabaseFile(":/database/pokemon.txt");
    QTextStream pokemonNames(&pokemonDatabaseFile);
    pokemonDatabaseFile.open(QFile::ReadOnly | QFile::Text);
    
    for(int i = 0; i<1025; i++){
        ui->comboBox_Pokemon->addItem(pokemonNames.readLine());
    }
    pokemonDatabaseFile.close();

    // Opens the move.txt files from database folder and stores it's entire list in a combo box
    QFile moveDatabseFile(":/database/move.txt");
    QTextStream moveNames(&moveDatabseFile);
    moveDatabseFile.open(QFile::ReadOnly | QFile::Text);
    
    for(int i = 0; i<934; i++){
        ui->comboBox_Move->addItem(moveNames.readLine());
    }
    moveDatabseFile.close();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    // Opens a Message Box About Qt
    QMessageBox::aboutQt(this);
}


void MainWindow::on_actionAbout_Pokedex_triggered()
{
    // Opens a New Window About this application
    aboutpokedex newdialog;
    newdialog.setModal(true);
    newdialog.exec();
}

void MainWindow::on_pushButton_PokemonData_clicked()
{
    // Opens a Dialog box if Bulbasaur is selected on Combobox
    if (ui->comboBox_Pokemon->currentText() == "Bulbasaur"){
        bulbasaur bulbasaurdata;
        bulbasaurdata.setModal(true);
        bulbasaurdata.exec();
    }
}

