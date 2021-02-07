#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QFrame>
#include <QObject>
#include <QListWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>
#include <QAbstractButton>
#include <QGraphicsScene>
#include   <QPainter>
#include <QSpinBox>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT
protected:
     void paintEvent(QPaintEvent *event);
public:
     bool bt1 = false,bt2 = false;
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:

    Ui::Widget *ui;
public slots:
    void paint();
    void copy();
    void delet();
};
#endif // WIDGET_H
