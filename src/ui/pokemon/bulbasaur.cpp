#include "../../../include/ui/pokemon/bulbasaur.h"
#include "../../../forms/pokemon/ui_bulbasaur.h"

bulbasaur::bulbasaur(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::bulbasaur)
{
    ui->setupUi(this);
}

bulbasaur::~bulbasaur()
{
    delete ui;
}
