#ifndef THREADB_H
#define THREADB_H

#include <QObject>
#include <QThread>
#include "threada.h"

class ThreadB : public QThread
{
public:
    ThreadB();
    ~ThreadB();
    void run();
};

#endif // THREADB_H
