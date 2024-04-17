/********************************************************************************
** Form generated from reading UI file 'movewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOVEWINDOW_H
#define UI_MOVEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_MoveWindow
{
public:

    void setupUi(QDialog *MoveWindow)
    {
        if (MoveWindow->objectName().isEmpty())
            MoveWindow->setObjectName("MoveWindow");
        MoveWindow->resize(400, 300);

        retranslateUi(MoveWindow);

        QMetaObject::connectSlotsByName(MoveWindow);
    } // setupUi

    void retranslateUi(QDialog *MoveWindow)
    {
        MoveWindow->setWindowTitle(QCoreApplication::translate("MoveWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveWindow: public Ui_MoveWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOVEWINDOW_H
