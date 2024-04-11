#ifndef ABOUTPOKEDEX_H
#define ABOUTPOKEDEX_H

#include <QDialog>

namespace Ui {
class aboutpokedex;
}

class aboutpokedex : public QDialog
{
    Q_OBJECT

public:
    explicit aboutpokedex(QWidget *parent = nullptr);
    ~aboutpokedex();

private:
    Ui::aboutpokedex *ui;
};

#endif // ABOUTPOKEDEX_H
