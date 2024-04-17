#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionAbout_Qt_triggered();
    void on_actionAbout_Pokedex_triggered();
    void on_pushButton_PokemonData_clicked();
    void on_pushButton_MoveData_clicked();
    void on_pushButton_AbilityData_clicked();
    void addPokemon();
    void addMove();
    void addAbility();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
