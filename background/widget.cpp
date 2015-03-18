#include "widget.h"

#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QSizePolicy>
#include <QStyleOption>
#include <QPainter>


Widget::Widget(QWidget *parent)
	:QWidget(parent)
{
	QVBoxLayout *layout = new QVBoxLayout;
	label = new QLabel(tr("put_msg_here"));

	layout->addWidget(label);
    layout->addStretch(1);
	
	button = new QPushButton(tr("click_me"));
    button->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Minimum);
	layout->addWidget(button);

	setLayout(layout);
}

Widget::~Widget()
{
}


void Widget::paintEvent(QPaintEvent *)
{
    QStyleOption opt;
    opt.init(this);
    QPainter p(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &p, this);
}

