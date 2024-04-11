#include "../include/aboutpokedex.h"
#include "../forms/ui_aboutpokedex.h"

aboutpokedex::aboutpokedex(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::aboutpokedex)
{
    ui->setupUi(this);
    ui->label->setText("This is an advanced Pokedex App Made by HunarPG");
}

aboutpokedex::~aboutpokedex()
{
    delete ui;
}
