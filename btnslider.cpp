#include "btnslider.h"
#include "ui_btnslider.h"

btnslider::btnslider(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::btnslider)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|Qt::Popup);//去掉边框，且点击主窗口关闭该窗口
    ui->btnSlider->setMinimum(0);

    ui->btnSlider->setMaximum(10);

    ui->btnSlider->setValue(0);

}

btnslider::~btnslider()
{
    delete ui;
}

void btnslider::on_btnSlider_valueChanged(int value)
{
    //double per=slider.
    emit mySignal(value);
}
