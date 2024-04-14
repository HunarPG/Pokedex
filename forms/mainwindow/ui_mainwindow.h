/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout_Pokedex;
    QAction *actionAbout_Qt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_Pokemon;
    QComboBox *comboBox_Pokemon;
    QPushButton *pushButton_PokemonData;
    QVBoxLayout *verticalLayout_Move;
    QComboBox *comboBox_Move;
    QPushButton *pushButton_MoveData;
    QVBoxLayout *verticalLayout_Ability;
    QComboBox *combobox_Ability;
    QPushButton *pushButton_AbilityData;
    QMenuBar *menubar;
    QMenu *menuAbout;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(549, 426);
        actionAbout_Pokedex = new QAction(MainWindow);
        actionAbout_Pokedex->setObjectName("actionAbout_Pokedex");
        actionAbout_Qt = new QAction(MainWindow);
        actionAbout_Qt->setObjectName("actionAbout_Qt");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout_Pokemon = new QVBoxLayout();
        verticalLayout_Pokemon->setObjectName("verticalLayout_Pokemon");
        comboBox_Pokemon = new QComboBox(centralwidget);
        comboBox_Pokemon->setObjectName("comboBox_Pokemon");
        comboBox_Pokemon->setEditable(true);

        verticalLayout_Pokemon->addWidget(comboBox_Pokemon);

        pushButton_PokemonData = new QPushButton(centralwidget);
        pushButton_PokemonData->setObjectName("pushButton_PokemonData");

        verticalLayout_Pokemon->addWidget(pushButton_PokemonData);


        verticalLayout->addLayout(verticalLayout_Pokemon);

        verticalLayout_Move = new QVBoxLayout();
        verticalLayout_Move->setObjectName("verticalLayout_Move");
        comboBox_Move = new QComboBox(centralwidget);
        comboBox_Move->setObjectName("comboBox_Move");
        comboBox_Move->setEditable(true);

        verticalLayout_Move->addWidget(comboBox_Move);

        pushButton_MoveData = new QPushButton(centralwidget);
        pushButton_MoveData->setObjectName("pushButton_MoveData");

        verticalLayout_Move->addWidget(pushButton_MoveData);


        verticalLayout->addLayout(verticalLayout_Move);

        verticalLayout_Ability = new QVBoxLayout();
        verticalLayout_Ability->setObjectName("verticalLayout_Ability");
        combobox_Ability = new QComboBox(centralwidget);
        combobox_Ability->setObjectName("combobox_Ability");
        combobox_Ability->setEditable(true);

        verticalLayout_Ability->addWidget(combobox_Ability);

        pushButton_AbilityData = new QPushButton(centralwidget);
        pushButton_AbilityData->setObjectName("pushButton_AbilityData");

        verticalLayout_Ability->addWidget(pushButton_AbilityData);


        verticalLayout->addLayout(verticalLayout_Ability);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 549, 23));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName("menuAbout");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout_Pokedex);
        menuAbout->addAction(actionAbout_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAbout_Pokedex->setText(QCoreApplication::translate("MainWindow", "&About Pokedex", nullptr));
        actionAbout_Qt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
        pushButton_PokemonData->setText(QCoreApplication::translate("MainWindow", "Show Pokemon Data", nullptr));
        pushButton_MoveData->setText(QCoreApplication::translate("MainWindow", "Show Move Data", nullptr));
        pushButton_AbilityData->setText(QCoreApplication::translate("MainWindow", "Show Ability Data", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("MainWindow", "About", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
