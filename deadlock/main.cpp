#include <QCoreApplication>
#include "threada.h"
#include "threadb.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ThreadA ta;
    ThreadB tb;

    ta.start();
    tb.start();


    return a.exec();
}
