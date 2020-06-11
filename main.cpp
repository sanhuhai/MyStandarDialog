#include "MyStandarDialog.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyStandarDialog w;
    w.show();
    return a.exec();
}
