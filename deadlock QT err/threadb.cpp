#include "threadb.h"

ThreadB::ThreadB()
{

}

ThreadB::~ThreadB()
{

}

void ThreadB::run()
{
    mutex2.lock();
    qDebug() << "ThreadB"<< QThread::currentThreadId() <<"locked by mutex2" << endl;
    sleep(3);
    mutex1.lock();
    qDebug() << "ThreadB"<< QThread::currentThreadId() << "locked by mutex1" << endl;
    mutex1.unlock();
    mutex2.lock();

}
