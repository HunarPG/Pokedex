#include "../../../include/ui/item/itemwindow.h"
#include "../../../forms/item/ui_itemwindow.h"

ItemWindow::ItemWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ItemWindow)
{
    ui->setupUi(this);
}

ItemWindow::~ItemWindow()
{
    delete ui;
}
