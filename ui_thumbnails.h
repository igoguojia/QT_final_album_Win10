/********************************************************************************
** Form generated from reading UI file 'thumbnails.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THUMBNAILS_H
#define UI_THUMBNAILS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Thumbnails
{
public:
    QListWidget *listWidget_2;

    void setupUi(QDialog *Thumbnails)
    {
        if (Thumbnails->objectName().isEmpty())
            Thumbnails->setObjectName(QStringLiteral("Thumbnails"));
        Thumbnails->resize(1070, 800);
        Thumbnails->setMinimumSize(QSize(1070, 800));
        listWidget_2 = new QListWidget(Thumbnails);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(0, 0, 1070, 800));
        listWidget_2->setStyleSheet(QLatin1String("#listWidget_2\n"
"{\n"
"border:0px;\n"
"}\n"
""));
        listWidget_2->setAutoScrollMargin(8);
        listWidget_2->setIconSize(QSize(350, 250));
        listWidget_2->setTextElideMode(Qt::ElideLeft);
        listWidget_2->setMovement(QListView::Snap);
        listWidget_2->setResizeMode(QListView::Adjust);
        listWidget_2->setSpacing(20);
        listWidget_2->setViewMode(QListView::IconMode);

        retranslateUi(Thumbnails);

        QMetaObject::connectSlotsByName(Thumbnails);
    } // setupUi

    void retranslateUi(QDialog *Thumbnails)
    {
        Thumbnails->setWindowTitle(QApplication::translate("Thumbnails", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Thumbnails: public Ui_Thumbnails {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THUMBNAILS_H
