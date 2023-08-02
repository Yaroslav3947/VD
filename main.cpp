#include "MainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_NativeWindows);
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
