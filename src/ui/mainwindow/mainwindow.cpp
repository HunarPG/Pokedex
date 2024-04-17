#include "../../../include/ui/mainwindow/mainwindow.h"
#include "../../../forms/mainwindow/ui_mainwindow.h"
#include <qmessagebox.h>
#include "../../../include/ui/mainwindow/aboutpokedex.h"
#include <qfile.h>
#include <qtextstream.h>
#include "../../../include/ui/pokemon/bulbasaur.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    addPokemon();
    addMove();
    addAbility();
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

void MainWindow::addPokemon(){
    // Opens the pokemon.txt files from resources/database folder and stores it's entire list in a combo box
    QFile pokemonDatabaseFile(":/database/pokemon.txt");
    QTextStream pokemonNames(&pokemonDatabaseFile);
    pokemonDatabaseFile.open(QFile::ReadOnly | QFile::Text);
    
    for(int i = 0; i<1025; i++){
        ui->comboBox_Pokemon->addItem(pokemonNames.readLine());
    }
    pokemonDatabaseFile.close();
}

void MainWindow::addMove(){
    // Opens the move.txt files from resources/database folder and stores it's entire list in a combo box
    QFile moveDatabseFile(":/database/move.txt");
    QTextStream moveNames(&moveDatabseFile);
    moveDatabseFile.open(QFile::ReadOnly | QFile::Text);
    
    for(int i = 0; i<934; i++){
        ui->comboBox_Move->addItem(moveNames.readLine());
    }
    moveDatabseFile.close();
}

void MainWindow::addAbility(){
    // Opens the ability.txt files from resources/database folder and stores it's entire list in a combo box
    QFile abilityDatabseFile(":/database/ability.txt");
    QTextStream abilityNames(&abilityDatabseFile);
    abilityDatabseFile.open(QFile::ReadOnly | QFile::Text);
    
    for(int i = 0; i<310; i++){
        ui->combobox_Ability->addItem(abilityNames.readLine());
    }
    abilityDatabseFile.close();
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

