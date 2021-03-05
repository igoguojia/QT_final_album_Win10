#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QFileDialog>
#include <QString>
#include <QImage>
#include <QTimer>
#include <QLabel>
#include "dialog.h"
#include"btnslider.h"
#include <QListWidget>
//#include "suolue.h"
#include "thumbnails.h"
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    QLabel *label;
    QPixmap pix;
    QTimer *timer;
    int i;
    qreal w,h;
    QString image_position;
    QStringList::Iterator itor;
    QMatrix matrix;
    QString imageList[100];
    QString image_sum;
     int j;
      QStringList list;


private slots:
    void displayImage();

    void on_btnTools_clicked();

    void on_btnZoom_clicked();

    void on_btnOpen_clicked();

    void on_btnNext_clicked();

    void on_btnPrevious_clicked();

    void on_btnDelete_clicked();

    void on_btnRotate_clicked();
    void mySlot(int);

    void on_btnAll_clicked();




private:
    Ui::Widget *ui;
    Dialog *dialog;
    btnslider *btnsl;
    //suolue *yulan;
    Thumbnails *yulan;
    qreal  w0;
    qreal  h0;
};

#endif // WIDGET_H
