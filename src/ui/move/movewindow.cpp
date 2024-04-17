#include "../../../include/ui/move/movewindow.h"
#include "../../../forms/move/ui_movewindow.h"

MoveWindow::MoveWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MoveWindow)
{
    ui->setupUi(this);
}

MoveWindow::~MoveWindow()
{
    delete ui;
}
