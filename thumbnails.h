#ifndef THUMBNAILS_H
#define THUMBNAILS_H

#include <QDialog>
#include <QListWidget>
#include <qlabel.h>
namespace Ui {
class Thumbnails;
}

class Thumbnails :public QDialog
{
    Q_OBJECT

public:
    explicit Thumbnails(QWidget *parent = 0);
    ~Thumbnails();

private:
    Ui::Thumbnails *ui;
private:
   QStringList m_imgList;      // 文件目录下所有的图像文件名
   //QListWidget *m_listWidget;  // 预览窗口
   //QString m_strPath;          // 文件夹路径
   QLabel m_showWidget;        // 图像显示窗口
   QStringList::Iterator myitor,itor;
   QString image[100];
  //QPixmap pixmap;
   int mm;
   //QLabel *label;

private slots:
    void slot_itemClicked(QListWidgetItem*);
public:
    void sendList(QStringList *list,int j);   //用来传递数据


};

#endif // THUMBNAILS_H
