#ifndef SUOLUE_H
#define SUOLUE_H

#include <QWidget>
#include <QLabel>

class QStringList;
class QListWidget;
class QListWidgetItem;
class suolue : public QWidget
{
    Q_OBJECT
public:
    explicit suolue(QWidget *parent = nullptr);
    ~suolue();


private:
    void init();    // 初始化

public slots:
    void slot_itemClicked(QListWidgetItem*);
private:
    QStringList m_imgList;      // 图像文件名
    QListWidget *m_listWidget;  // 预览窗口
    //QString m_strPath;          // 文件夹路径
    QLabel m_showWidget;        // 图像显示窗口
    QStringList::Iterator myitor,itor;
public:
    void sendList(QStringList *list,int j);   //用来传递数据


};

#endif // SUOLUE_H
