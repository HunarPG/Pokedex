#ifndef POKEMONWINDOW_H
#define POKEMONWINDOW_H

#include <QDialog>

namespace Ui {
class PokemonWindow;
}

class PokemonWindow : public QDialog
{
    Q_OBJECT

public:
    explicit PokemonWindow(QWidget *parent = nullptr);
    ~PokemonWindow();

private:
    Ui::PokemonWindow *ui;
};

#endif // POKEMONWINDOW_H
