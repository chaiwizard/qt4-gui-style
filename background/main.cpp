#include <QApplication>
#include <QTranslator>

#include "widget.h"

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

	Widget widget;
    widget.resize(512,320);
	widget.show();
    widget.setStyleSheet("QWidget {background : url(:/images/background.png);}");

	return app.exec();
}
