/********************************************************************************
** Form generated from reading UI file 'aboutpokedex.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTPOKEDEX_H
#define UI_ABOUTPOKEDEX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_aboutpokedex
{
public:
    QHBoxLayout *horizontalLayout;
    QLabel *label;

    void setupUi(QDialog *aboutpokedex)
    {
        if (aboutpokedex->objectName().isEmpty())
            aboutpokedex->setObjectName("aboutpokedex");
        aboutpokedex->resize(400, 300);
        horizontalLayout = new QHBoxLayout(aboutpokedex);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(aboutpokedex);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);


        retranslateUi(aboutpokedex);

        QMetaObject::connectSlotsByName(aboutpokedex);
    } // setupUi

    void retranslateUi(QDialog *aboutpokedex)
    {
        aboutpokedex->setWindowTitle(QCoreApplication::translate("aboutpokedex", "About Pokedex", nullptr));
        label->setText(QCoreApplication::translate("aboutpokedex", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class aboutpokedex: public Ui_aboutpokedex {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTPOKEDEX_H
