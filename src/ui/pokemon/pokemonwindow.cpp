#include "../../../include/ui/pokemon/pokemonwindow.h"
#include "../../../forms/pokemon/ui_pokemonwindow.h"

PokemonWindow::PokemonWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::PokemonWindow)
{
    ui->setupUi(this);
}

PokemonWindow::~PokemonWindow()
{
    delete ui;
}
