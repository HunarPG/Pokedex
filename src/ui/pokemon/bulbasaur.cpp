#include "../../../include/ui/bulbasaur.h"
#include "../../../forms/ui_bulbasaur.h"

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
