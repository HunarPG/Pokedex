#ifndef ITEMWINDOW_H
#define ITEMWINDOW_H

#include <QDialog>

namespace Ui {
class ItemWindow;
}

class ItemWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ItemWindow(QWidget *parent = nullptr);
    ~ItemWindow();

private:
    Ui::ItemWindow *ui;
};

#endif // ITEMWINDOW_H
