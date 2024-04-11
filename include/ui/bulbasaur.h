#ifndef BULBASAUR_H
#define BULBASAUR_H

#include <QDialog>

namespace Ui {
class bulbasaur;
}

class bulbasaur : public QDialog
{
    Q_OBJECT

public:
    explicit bulbasaur(QWidget *parent = nullptr);
    ~bulbasaur();

private:
    Ui::bulbasaur *ui;
};

#endif // BULBASAUR_H
