#ifndef BTNSLIDER_H
#define BTNSLIDER_H

#include <QDialog>

namespace Ui {
class btnslider;
}

class btnslider : public QDialog
{
    Q_OBJECT

public:
    explicit btnslider(QWidget *parent = 0);
    ~btnslider();

signals:
    void mySignal(int);

private slots:
    void on_btnSlider_valueChanged(int value);

private:
    Ui::btnslider *ui;
};

#endif // BTNSLIDER_H
