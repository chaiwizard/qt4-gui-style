#ifndef _WIDGET_H_
#define _WIDGET_H_

#include <QWidget>

class QLabel;
class QPushButton;

class Widget : public QWidget
{
	Q_OBJECT
public:
	Widget(QWidget *parent = 0);
	~Widget();

protected:
    void paintEvent(QPaintEvent *);

private:
	QLabel *label;
	QPushButton *button;
};

#endif
