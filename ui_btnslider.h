/********************************************************************************
** Form generated from reading UI file 'btnslider.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BTNSLIDER_H
#define UI_BTNSLIDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_btnslider
{
public:
    QSlider *btnSlider;

    void setupUi(QDialog *btnslider)
    {
        if (btnslider->objectName().isEmpty())
            btnslider->setObjectName(QStringLiteral("btnslider"));
        btnslider->resize(180, 25);
        btnSlider = new QSlider(btnslider);
        btnSlider->setObjectName(QStringLiteral("btnSlider"));
        btnSlider->setGeometry(QRect(0, 0, 160, 22));
        btnSlider->setMaximum(100);
        btnSlider->setOrientation(Qt::Horizontal);
        btnSlider->setTickPosition(QSlider::NoTicks);
        btnSlider->setTickInterval(1);

        retranslateUi(btnslider);

        QMetaObject::connectSlotsByName(btnslider);
    } // setupUi

    void retranslateUi(QDialog *btnslider)
    {
        btnslider->setWindowTitle(QApplication::translate("btnslider", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class btnslider: public Ui_btnslider {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BTNSLIDER_H
