#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|Qt::Popup);//去掉边框，且点击主窗口关闭该窗口
}

Dialog::~Dialog()
{
    delete ui;
}
