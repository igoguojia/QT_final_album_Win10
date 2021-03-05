#include "suolue.h"
#include <QDir>
#include <QStringList>
#include <QListWidget>
#include <QVBoxLayout>
#include <QListWidgetItem>
#include <qdebug.h>
suolue::suolue(QWidget *parent) : QWidget(parent)
{
    this->init();

}
suolue::~suolue(){}

void suolue::init()
{
    // 窗口基本设置
    this->setWindowTitle("Image Preview");
    this->setMinimumSize(780, 600);
    m_showWidget.setWindowTitle("Image Show");
    m_showWidget.setAlignment(Qt::AlignCenter);

    const QSize IMAGE_SIZE(240, 160);
    const QSize ITEM_SIZE(240, 190);
    // QListWidget基本设置
    m_listWidget = new QListWidget(this);
    m_listWidget->setIconSize(IMAGE_SIZE);
    m_listWidget->setResizeMode(QListView::Adjust);
    m_listWidget->setViewMode(QListView::IconMode);
    m_listWidget->setMovement(QListView::Static);
    m_listWidget->setSpacing(8);

    // 创建单元项
    for (int i = 0; i<m_imgList.count(); ++i) {
        QPixmap pixmap(m_imgList.at(i));
        QListWidgetItem *listWidgetItem = new QListWidgetItem(QIcon(pixmap.scaled(IMAGE_SIZE)), m_imgList.at(i));
        listWidgetItem->setSizeHint(ITEM_SIZE);
        m_listWidget->insertItem(i, listWidgetItem);
    }

    // 窗口布局
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addWidget(m_listWidget);
    mainLayout->setMargin(0);
    this->setLayout(mainLayout);

    // 信号与槽
    connect(m_listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this, SLOT(slot_itemClicked(QListWidgetItem*)));
}

void suolue::slot_itemClicked(QListWidgetItem * item) {
    m_showWidget.setPixmap(QPixmap(m_imgList.at(m_listWidget->row(item))));
    m_showWidget.showMaximized();
}

void suolue::sendList(QStringList *list,int j)
{

    for(int i=0;i<j;i++)
        m_imgList.append("fuck!");
    for(itor=list->begin(),myitor=m_imgList.begin();itor<list->end(),myitor<m_imgList.end();myitor++,itor++)
    {
       *myitor = *itor;
    }
    qDebug()<<m_imgList.at(0)<<endl<<m_imgList.count();
}
