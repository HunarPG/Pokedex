/********************************************************************************
** Form generated from reading UI file 'pokemonwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POKEMONWINDOW_H
#define UI_POKEMONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_PokemonWindow
{
public:

    void setupUi(QDialog *PokemonWindow)
    {
        if (PokemonWindow->objectName().isEmpty())
            PokemonWindow->setObjectName("PokemonWindow");
        PokemonWindow->resize(400, 300);

        retranslateUi(PokemonWindow);

        QMetaObject::connectSlotsByName(PokemonWindow);
    } // setupUi

    void retranslateUi(QDialog *PokemonWindow)
    {
        PokemonWindow->setWindowTitle(QCoreApplication::translate("PokemonWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PokemonWindow: public Ui_PokemonWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POKEMONWINDOW_H
