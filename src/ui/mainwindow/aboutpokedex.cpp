#include "../../../include/ui/mainwindow/aboutpokedex.h"
#include "../../../forms/mainwindow/ui_aboutpokedex.h"

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
