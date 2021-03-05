#include "thumbnails.h"
#include "ui_thumbnails.h"
#include <QStringList>
#include <QListWidget>
#include <QVBoxLayout>
#include <QListWidgetItem>
#include <QDebug>
Thumbnails::Thumbnails(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Thumbnails)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint|Qt::Popup);//去掉边框，且点击主窗口关闭该窗口

    //const QSize IMAGE_SIZE(240, 160);
   // const QSize ITEM_SIZE(240, 190);
   /* m_listWidget = new QListWidget(this);
    m_listWidget->setIconSize(IMAGE_SIZE);
    m_listWidget->setResizeMode(QListView::Adjust);
    m_listWidget->setViewMode(QListView::IconMode);
    m_listWidget->setMovement(QListView::Static);
    m_listWidget->setSpacing(8);
*/
     // 创建单元项
    // pixmap.load(m_imgList.first());
   // ui->label->setPixmap(pixmap.scaled(80,80));
     ui->listWidget_2->setViewMode(QListView::IconMode);//设置显示模式为图标模式
ui->listWidget_2->setDragEnabled(false);            //控件不允许拖动
               //ui->listWidget_2->insertItem(i, listWidgetItem);


            // 窗口布局
            /*QVBoxLayout *mainLayout = new QVBoxLayout;
            mainLayout->addWidget(m_listWidget);
            mainLayout->setMargin(0);
            this->setLayout(mainLayout);*/
 connect(ui->listWidget_2, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(slot_itemClicked(QListWidgetItem*)));
}

Thumbnails::~Thumbnails()
{

    delete ui;

}
void Thumbnails::sendList(QStringList *list,int j)
{

    m_imgList.clear();
    ui->listWidget_2->clear();
    for(int i=0;i<j;i++)
        m_imgList.append("fuck!");
    for(itor=list->begin(),myitor=m_imgList.begin();itor<list->end(),myitor<m_imgList.end();myitor++,itor++)
    {
       *myitor = *itor;
    }
    qDebug()<<m_imgList.at(1)<<endl<<m_imgList.count();
    const QSize IMAGE_SIZE(300, 230);
    const QSize ITEM_SIZE(300, 250);
   //ui->listWidget_2->setIconSize(IMAGE_SIZE);
    //ui->listWidget_2->setResizeMode(QListView::Adjust);
   // ui->listWidget_2->setViewMode(QListView::IconMode);
   // ui->listWidget_2->setMovement(QListView::Static);
  // ui->listWidget_2->setSpacing(8);
        for (int i = 0; i<m_imgList.count(); ++i)
        {
            QPixmap pixmap;
            pixmap.load(m_imgList.at(i));
            //ui->label->setPixmap(pixmap.scaled(80,80));
            QListWidgetItem *listWidgetItem = new QListWidgetItem(QIcon(pixmap.scaled(IMAGE_SIZE,Qt::KeepAspectRatio)),m_imgList.at(i),ui->listWidget_2);
            listWidgetItem->setSizeHint(ITEM_SIZE);
            //ui->listWidget_2->addItem(listWidgetItem);
        }
        QVBoxLayout *mainLayout = new QVBoxLayout;
        //mainLayout->addWidget(m_listWidget);
        mainLayout->setMargin(0);
        this->setLayout(mainLayout);
}
void Thumbnails::slot_itemClicked(QListWidgetItem * item)
{
   /* QPixmap pi;
    pi.load(m_imgList.at(m_))*/
    m_showWidget.setAlignment(Qt::AlignCenter);
    m_showWidget.setStyleSheet(QLatin1String("\n"
  "background-color: rgb(0, 0, 0);"));
    //setWindowFlags (Qt::l | Qt::FramelessWindowHint);
    m_showWidget.setPixmap(QPixmap(m_imgList.at(ui->listWidget_2->row(item))));
    m_showWidget.showMaximized();
}

