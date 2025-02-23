#include "widget.h"
#include "ui_widget.h"
#include <QPushButton>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->btn1->setText("wdf???");
    ui->btn1->setText("???");
}

Widget::~Widget()
{
    delete ui;
}
