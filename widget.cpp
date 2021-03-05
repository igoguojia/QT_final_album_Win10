#include "widget.h"
#include "ui_widget.h"
#include "dialog.h"
#include "btnslider.h"
#include <QDebug>
//#include "suolue.h"
#include "thumbnails.h"
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    dialog = new Dialog(this);
    btnsl = new btnslider(this);
    yulan=new Thumbnails;

    i=1;

    //未载入图片前，禁用其他按钮
    ui->btnAll->setEnabled(false);
    ui->btnDelete->setEnabled(false);
    ui->btnNext->setEnabled(false);
    ui->btnPrevious->setEnabled(false);
    ui->btnRotate->setEnabled(false);
    ui->btnTools->setEnabled(false);
    ui->btnZoom->setEnabled(false);

    label=new QLabel(this);
   // label->resize(QSize(600,400));

    ui->scrollArea->setWidget(label);
    //默认新建的label控件填充scroll；·
    ui->scrollArea->setAlignment(Qt::AlignCenter);
    //让scrollarea居中显示
   label->setAlignment(Qt::AlignCenter);
    w0=label->width();
    h0=label->height();

    //让图片居中显示在scrollarea

    timer=new QTimer;//定时器，按下start后启动。
    connect(timer,SIGNAL(timeout()),this,SLOT(displayImage()));
    //connect(ui->btnOpen, &QPushButton::clicked, this, &Widget::on_btnOpen_clicked);
    //connect(ui->btnStart,&QPushButton::clicked,this,&MyWidget::on_btnStart_clicked);
    connect(btnsl,SIGNAL(mySignal(int)),this,SLOT(mySlot(int)));




}

void Widget::mySlot(int value)//滑块放大槽函数
{
   // qDebug()<<"The value is "<<value<<endl;
    timer->stop();
    pix.load(imageList[i]);

    w=w0*(1+value*0.1);
    h=h0*(1+value*0.1);


    pix=pix.scaled(w,h,Qt::KeepAspectRatio);
    label->setPixmap(pix);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::displayImage()
{
    pix.load(imageList[i]);
    w=label->width();
    h=label->height();
    pix=pix.scaled(w,h,Qt::KeepAspectRatio);
    label->setPixmap(pix);
    image_position = QString::number(i);
    //记录当前照片序号
    i++;
    if (i>j)
    {
         i=1;
    }
}

void Widget::on_btnTools_clicked()
{

        QPoint moveTo = this->mapToGlobal(QPoint(0,0));//弹窗相对于this（主窗口）位置
        moveTo += QPoint(890, 68);  //具体位置自行调试
        dialog->move(moveTo);
        dialog->show();

 }

void Widget::on_btnZoom_clicked()
{
    QPoint moveTo=this->mapToGlobal(QPoint(0,0));//弹窗相对于this（主窗口）位置
    moveTo +=QPoint(341,68);//
    btnsl->move(moveTo);
    btnsl->show();
}

void Widget::on_btnOpen_clicked()
{
    int mm=0;    //定义此int为局部变量，如果为全局变量，则再次点击btnOpen会把上次的图片再次加载；
    j=0;
    list.clear();
    QPixmap clearPix = QPixmap();
    pix = clearPix;
    update();
    list = QFileDialog::getOpenFileNames(this,QStringLiteral("添加图片"),"./","(*.png *.jpg *.jpeg)");
    for(itor=list.begin();itor<list.end();itor++)
    {
        mm++;
        imageList[mm]= *itor;
    }
    j=mm;
    image_sum =QString::number(mm);
    //用于添加Qlabel后显示总照片数用
    image_position=QString::number(0);
    //用于添加Qlabel后显示当前照片序号
    pix.load(imageList[i]);
    w = label->width();
    h = label->height();
    pix = pix.scaled(w,h,Qt::KeepAspectRatio);
    label->setPixmap(pix);
    if(image_sum.toInt()>0)
    {
        ui->btnAll->setEnabled(true);
        ui->btnDelete->setEnabled(true);
        ui->btnNext->setEnabled(true);
        ui->btnPrevious->setEnabled(true);
        ui->btnRotate->setEnabled(true);
        ui->btnTools->setEnabled(true);
        ui->btnZoom->setEnabled(true);
    }

}

void Widget::on_btnNext_clicked()
{
    timer->stop();
       i++;
       if (i>j)
           i=1;
       image_position = QString::number(i);
       pix.load(imageList[i]);
       w = label->width();
       h = label->height();
       pix = pix.scaled(w,h,Qt::KeepAspectRatio);
       label->setPixmap(pix);
}

void Widget::on_btnRotate_clicked()
{
    timer->stop();
    matrix.rotate(90);
    pix = pix.transformed(matrix,Qt::FastTransformation);
    //pix = pix.scaled(label->width(),label->height(),Qt::KeepAspectRatio);
    //添加这个图片旋转后会模糊
    label->setPixmap(pix);
}

void Widget::on_btnPrevious_clicked()
{
    timer->stop();
      i--;
      if (i<1)
          i=j;
      image_position = QString::number(i);
      pix.load(imageList[i]);
      w = label->width();
      h = label->height();
      pix = pix.scaled(w,h,Qt::KeepAspectRatio);
      label->setPixmap(pix);
}

void Widget::on_btnDelete_clicked()
{
    if(j>0)
    {
        int m;
        imageList[i].remove(i,1);
        for(m=i;m<image_sum.toInt();m++)
        {
            imageList[m]=imageList[m+1];
        }
        if(image_position.toInt()==image_sum.toInt())
        {
            pix.load(imageList[i-1]);
            i=i-1;
        }
        else if(image_position.toInt()<image_sum.toInt())
        {
            pix.load(imageList[i]);
        }
        pix.load(imageList[i]);
        w = label->width();
        h = label->height();
        pix = pix.scaled(w,h,Qt::KeepAspectRatio);
        label->setPixmap(pix);
        int sum1 = image_sum.toInt()-1;
        image_sum=QString::number(sum1);
        j--;
        if(image_position.toInt()<=image_sum.toInt())
        {
            //ui->actionNumber->setText(tr("%1 / %2").arg(image_position).arg(image_sum));
        }
        else
        {
            //ui->actionNumber->setText(tr("%1  / %2").arg(QString::number(image_position.toInt()-1)).arg(image_sum));
            image_position=QString::number(image_position.toInt()-1);
        }
        if(j==0)
        {
            ui->btnAll->setEnabled(false);
            ui->btnDelete->setEnabled(false);
            ui->btnNext->setEnabled(false);
            ui->btnPrevious->setEnabled(false);
            ui->btnRotate->setEnabled(false);
            ui->btnTools->setEnabled(false);
            ui->btnZoom->setEnabled(false);
        }
    }
}


void Widget::on_btnAll_clicked()
{
    yulan->sendList(&list,j);//直接调用public函数将list数据传递过去
    QPoint moveTo=this->mapToGlobal(QPoint(0,0));//弹窗相对于this（主窗口）位置
    moveTo +=QPoint(0,110);//
    yulan->move(moveTo);
    yulan->show();
}
