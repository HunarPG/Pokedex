/********************************************************************************
** Form generated from reading UI file 'itemwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMWINDOW_H
#define UI_ITEMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_ItemWindow
{
public:

    void setupUi(QDialog *ItemWindow)
    {
        if (ItemWindow->objectName().isEmpty())
            ItemWindow->setObjectName("ItemWindow");
        ItemWindow->resize(400, 300);

        retranslateUi(ItemWindow);

        QMetaObject::connectSlotsByName(ItemWindow);
    } // setupUi

    void retranslateUi(QDialog *ItemWindow)
    {
        ItemWindow->setWindowTitle(QCoreApplication::translate("ItemWindow", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemWindow: public Ui_ItemWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMWINDOW_H
