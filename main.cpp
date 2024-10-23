#include "cbuildingdialog.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CBuildingDialog w;
    w.show();
    return a.exec();
}
