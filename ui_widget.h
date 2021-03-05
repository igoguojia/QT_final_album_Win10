/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *btnTools;
    QPushButton *btnZoom;
    QPushButton *btnAll;
    QPushButton *btnOpen;
    QPushButton *btnRotate;
    QPushButton *btnDelete;
    QPushButton *btnNext;
    QPushButton *btnPrevious;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1070, 960);
        Widget->setMinimumSize(QSize(1070, 960));
        Widget->setMaximumSize(QSize(1070, 960));
        scrollArea = new QScrollArea(Widget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(0, 110, 1070, 800));
        scrollArea->setMinimumSize(QSize(0, 0));
        scrollArea->setStyleSheet(QLatin1String("#scrollArea\n"
"{\n"
"border:0px;\n"
"}\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1070, 800));
        scrollArea->setWidget(scrollAreaWidgetContents);
        btnTools = new QPushButton(Widget);
        btnTools->setObjectName(QStringLiteral("btnTools"));
        btnTools->setGeometry(QRect(1003, 0, 67, 67));
        btnTools->setMinimumSize(QSize(67, 67));
        btnTools->setStyleSheet(QString::fromUtf8("#btnTools\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\20714.png);\n"
"}\n"
"#btnTools:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2076.png);\n"
"}"));
        btnZoom = new QPushButton(Widget);
        btnZoom->setObjectName(QStringLiteral("btnZoom"));
        btnZoom->setGeometry(QRect(401, 0, 67, 67));
        btnZoom->setMinimumSize(QSize(67, 67));
        btnZoom->setMaximumSize(QSize(67, 67));
        btnZoom->setStyleSheet(QString::fromUtf8("#btnZoom\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\20710.png);\n"
"}\n"
"#btnZoom:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2073.png);\n"
"}"));
        btnZoom->setFlat(true);
        btnAll = new QPushButton(Widget);
        btnAll->setObjectName(QStringLiteral("btnAll"));
        btnAll->setGeometry(QRect(0, 0, 170, 67));
        btnAll->setMinimumSize(QSize(170, 67));
        btnAll->setAutoFillBackground(false);
        btnAll->setStyleSheet(QString::fromUtf8("QPushButton#btnAll\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2078.png);\n"
"/*border:0pix;*/\n"
"}\n"
"/*QPushButton#btnAll:hover\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2071.png);\n"
"}*/\n"
"QPushButton#btnAll:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2071.png);\n"
"\n"
"}"));
        btnAll->setIconSize(QSize(170, 66));
        btnAll->setFlat(false);
        btnOpen = new QPushButton(Widget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setGeometry(QRect(170, 0, 117, 67));
        btnOpen->setMinimumSize(QSize(117, 67));
        btnOpen->setMaximumSize(QSize(117, 67));
        btnOpen->setStyleSheet(QString::fromUtf8("#btnOpen\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2079.png);\n"
"}\n"
"#btnOpen:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2072.png);\n"
"}"));
        btnOpen->setIconSize(QSize(100, 67));
        btnRotate = new QPushButton(Widget);
        btnRotate->setObjectName(QStringLiteral("btnRotate"));
        btnRotate->setGeometry(QRect(535, 0, 67, 67));
        btnRotate->setMinimumSize(QSize(67, 67));
        btnRotate->setMaximumSize(QSize(67, 67));
        btnRotate->setStyleSheet(QString::fromUtf8("#btnRotate\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\20712.png);\n"
"}\n"
"#btnRotate:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2075.png);\n"
"}"));
        btnDelete = new QPushButton(Widget);
        btnDelete->setObjectName(QStringLiteral("btnDelete"));
        btnDelete->setGeometry(QRect(468, 0, 67, 67));
        btnDelete->setMinimumSize(QSize(67, 67));
        btnDelete->setMaximumSize(QSize(67, 67));
        btnDelete->setStyleSheet(QString::fromUtf8("#btnDelete\n"
"{\n"
"	border-image: url(:/image/\345\233\276\347\211\20711.png);\n"
"}\n"
"#btnDelete:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\2074.png);\n"
"}"));
        btnNext = new QPushButton(Widget);
        btnNext->setObjectName(QStringLiteral("btnNext"));
        btnNext->setGeometry(QRect(930, 110, 140, 800));
        btnNext->setMinimumSize(QSize(139, 800));
        btnNext->setStyleSheet(QString::fromUtf8("#btnNext:hover\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\20716.png);\n"
"}\n"
"#btnNext:pressed\n"
"{\n"
"	border-image: url(:/image/\345\233\276\347\211\20716.png);\n"
"}"));
        btnNext->setFlat(true);
        btnPrevious = new QPushButton(Widget);
        btnPrevious->setObjectName(QStringLiteral("btnPrevious"));
        btnPrevious->setGeometry(QRect(0, 110, 140, 800));
        btnPrevious->setMinimumSize(QSize(139, 500));
        btnPrevious->setStyleSheet(QString::fromUtf8("#btnPrevious:hover\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\20715.png);\n"
"}\n"
"#btnPrevious:pressed\n"
"{\n"
"border-image: url(:/image/\345\233\276\347\211\20715.png);\n"
"}"));
        btnPrevious->setFlat(true);

        retranslateUi(Widget);

        btnZoom->setDefault(false);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", Q_NULLPTR));
        btnTools->setText(QString());
        btnZoom->setText(QString());
        btnDelete->setText(QString());
        btnNext->setText(QString());
        btnPrevious->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
