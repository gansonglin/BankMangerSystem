#include "createdumpfile.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CreateDumpFile w;
	w.show();
	return a.exec();
}