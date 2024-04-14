/********************************************************************************
** Form generated from reading UI file 'bulbasaur.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BULBASAUR_H
#define UI_BULBASAUR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_bulbasaur
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *SpecificGeneration;
    QWidget *Gen1;
    QWidget *Gen2;
    QWidget *Gen3;
    QWidget *Gen4;
    QWidget *Gen5;
    QWidget *Gen6;
    QWidget *Gen7;
    QWidget *Gen8;
    QWidget *Gen9;

    void setupUi(QDialog *bulbasaur)
    {
        if (bulbasaur->objectName().isEmpty())
            bulbasaur->setObjectName("bulbasaur");
        bulbasaur->resize(1008, 665);
        horizontalLayout = new QHBoxLayout(bulbasaur);
        horizontalLayout->setObjectName("horizontalLayout");
        SpecificGeneration = new QTabWidget(bulbasaur);
        SpecificGeneration->setObjectName("SpecificGeneration");
        Gen1 = new QWidget();
        Gen1->setObjectName("Gen1");
        SpecificGeneration->addTab(Gen1, QString());
        Gen2 = new QWidget();
        Gen2->setObjectName("Gen2");
        SpecificGeneration->addTab(Gen2, QString());
        Gen3 = new QWidget();
        Gen3->setObjectName("Gen3");
        SpecificGeneration->addTab(Gen3, QString());
        Gen4 = new QWidget();
        Gen4->setObjectName("Gen4");
        SpecificGeneration->addTab(Gen4, QString());
        Gen5 = new QWidget();
        Gen5->setObjectName("Gen5");
        SpecificGeneration->addTab(Gen5, QString());
        Gen6 = new QWidget();
        Gen6->setObjectName("Gen6");
        SpecificGeneration->addTab(Gen6, QString());
        Gen7 = new QWidget();
        Gen7->setObjectName("Gen7");
        SpecificGeneration->addTab(Gen7, QString());
        Gen8 = new QWidget();
        Gen8->setObjectName("Gen8");
        SpecificGeneration->addTab(Gen8, QString());
        Gen9 = new QWidget();
        Gen9->setObjectName("Gen9");
        SpecificGeneration->addTab(Gen9, QString());

        horizontalLayout->addWidget(SpecificGeneration);


        retranslateUi(bulbasaur);

        SpecificGeneration->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(bulbasaur);
    } // setupUi

    void retranslateUi(QDialog *bulbasaur)
    {
        bulbasaur->setWindowTitle(QCoreApplication::translate("bulbasaur", "Bulbasaur", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen1), QCoreApplication::translate("bulbasaur", "Gen 1", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen2), QCoreApplication::translate("bulbasaur", "Gen 2", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen3), QCoreApplication::translate("bulbasaur", "Gen 3", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen4), QCoreApplication::translate("bulbasaur", "Gen 4", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen5), QCoreApplication::translate("bulbasaur", "Gen 5", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen6), QCoreApplication::translate("bulbasaur", "Gen 6", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen7), QCoreApplication::translate("bulbasaur", "Gen 7", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen8), QCoreApplication::translate("bulbasaur", "Gen 8", nullptr));
        SpecificGeneration->setTabText(SpecificGeneration->indexOf(Gen9), QCoreApplication::translate("bulbasaur", "Gen 9", nullptr));
    } // retranslateUi

};

namespace Ui {
    class bulbasaur: public Ui_bulbasaur {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BULBASAUR_H
