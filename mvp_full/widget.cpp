#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}
void Widget::paint(){
    /*QPainter* paint = new QPainter(this);
    paint->setBrush(QBrush(Qt::black, Qt::SolidPattern));
    paint->setPen(QPen(QColor (Qt::darkCyan), 2, Qt::SolidLine));
    paint->drawLine(QLine(800,0,800,1400));
    paint->setPen(QPen(QColor (Qt::black), 2, Qt::SolidLine));

    //треугольник стандартный
    int x1 = 100;
        int y1 = 600;
        int x2 = 350;
        int y2 = 300;
        int x3 = 600;
        int y3 = 600;
        paint->drawLine(x1,y1,x2,y2);
        paint->drawLine(x3,y3,x2,y2);
        paint->drawLine(x1,y1,x3,y3);*/
    bt1= true;
    repaint();

}
void Widget::paintEvent(QPaintEvent *event)
{Q_UNUSED(event);
    QPainter painter(this); // Создаём объект отрисовщика
   int value = ui->spinBox->value();
    // Устанавливаем кисть абриса
   if(ui->radioButton->isChecked()){
           // Если красный, то отрисовываем красный круг
           painter.setPen(QPen(Qt::red, 1, Qt::SolidLine, Qt::FlatCap));

       } else if(ui->radioButton_2->isChecked()){
           // Если зелёный, то отрисовываем зеленый круг
          painter.setPen(QPen(Qt::yellow, 1, Qt::SolidLine, Qt::FlatCap));

       } else if(ui->radioButton_3->isChecked()){
           // Если синий, то отрисовываем синий круг
         painter.setPen(QPen(Qt::green, 1, Qt::SolidLine, Qt::FlatCap));
   } else if(ui->radioButton_4->isChecked()){
       // Если синий, то отрисовываем синий круг
     painter.setPen(QPen(Qt::blue, 1, Qt::SolidLine, Qt::FlatCap));
   } else if(ui->radioButton_5->isChecked()){
       // Если синий, то отрисовываем синий круг
     painter.setPen(QPen(Qt::magenta, 1, Qt::SolidLine, Qt::FlatCap));
       } else {
           // Если ничего не выбрано, то отрисовываем белый круг
       painter.setPen(QPen(Qt::black, 1, Qt::SolidLine, Qt::FlatCap));
       painter.setBrush(QBrush(Qt::white, Qt::SolidPattern));

       }

    if(bt1 == true){

        painter.drawLine(10*value,60*value,35*value,30*value);
        painter.drawLine(60*value,60*value,35*value,30*value);
        painter.drawLine(10*value,60*value,60*value,60*value);

}
    if(bt2 == true){
        painter.drawLine(10*value,60*value,35*value,30*value);
        painter.drawLine(60*value,60*value,35*value,30*value);
        painter.drawLine(10*value,60*value,60*value,60*value);

        painter.drawLine(10*value,90*value,35*value,60*value);
        painter.drawLine(60*value,90*value,35*value,60*value);
        painter.drawLine(10*value,90*value,60*value,90*value);
    }
    bt1=false;
    bt2=false;
}
void Widget::copy(){
    bt1= true;
    bt2= true;
    repaint();

}
void Widget::delet(){
repaint();
}
Widget::~Widget()
{
    delete ui;
}

