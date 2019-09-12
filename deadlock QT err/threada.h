#ifndef THREADA_H
#define THREADA_H

#include <QObject>
#include <QThread>
#include <QMutex>
#include <QDebug>

static QMutex mutex1;
static QMutex mutex2;
class ThreadA : public QThread
{
public:
    ThreadA();
    ~ThreadA();
    void run();
};

#endif // THREADA_H
