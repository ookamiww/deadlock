#include "threada.h"

ThreadA::ThreadA()
{

}

ThreadA::~ThreadA()
{

}

void ThreadA::run()
{
    mutex1.lock();
    qDebug() << "ThreadA"<< QThread::currentThreadId() << "locked by mutex1" << endl;
    sleep(3);
    mutex2.lock();
    qDebug() << "ThreadA"<< QThread::currentThreadId() << "locked by mutex2" << endl;
    mutex2.unlock();
    mutex1.lock();
}
