#ifndef THREADA_H
#define THREADA_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include "global.h"

class ThreadA : public QThread
{
public:
    ThreadA();
    ~ThreadA();
    void run();
};

#endif // THREADA_H
