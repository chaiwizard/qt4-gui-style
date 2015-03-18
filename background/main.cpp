#include <QApplication>
#include <QTranslator>

#include "widget.h"

#include <QFile>
#include <QTextStream>


void loadStyleSheet(QString qssName)
{
    QFile data(qssName);
    QString qssFile;
    if(data.open(QFile::ReadOnly))
    {
        QTextStream styleIn(&data);
        qssFile = styleIn.readAll();
        data.close();
        qApp->setStyleSheet(qssFile);
    }
}

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);

    loadStyleSheet(":/widget.qss");

	Widget widget;
    widget.resize(512,320);
	widget.show();
    //widget.setStyleSheet("QWidget {background : url(:/images/background.png);}");



	return app.exec();
}
