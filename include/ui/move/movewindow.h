#ifndef MOVEWINDOW_H
#define MOVEWINDOW_H

#include <QDialog>

namespace Ui {
class MoveWindow;
}

class MoveWindow : public QDialog
{
    Q_OBJECT

public:
    explicit MoveWindow(QWidget *parent = nullptr);
    ~MoveWindow();

private:
    Ui::MoveWindow *ui;
};

#endif // MOVEWINDOW_H
