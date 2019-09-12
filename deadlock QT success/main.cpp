#include <QCoreApplication>
#include <QThread>
#include <QMutex>
#include <QDebug>

static QMutex mutex1;
static QMutex mutex2;
class ThreadA : public QThread
{
public:
    ThreadA(){}
    virtual ~ThreadA(){}
    void run();
};

void ThreadA::run(){

    mutex1.lock();
    qDebug() << "ThreadA"<< QThread::currentThreadId() << "locked by mutex1" << endl;
    sleep(1);
    mutex2.lock();
    qDebug() << "ThreadA"<< QThread::currentThreadId() << "locked by mutex2" << endl;
    mutex2.unlock();
    mutex1.unlock();
}

class ThreadB : public QThread
{
public:
    ThreadB(){}
    virtual ~ThreadB(){}
    void run();
};

void ThreadB::run(){

    mutex2.lock();
    qDebug() << "ThreadB"<< QThread::currentThreadId() << "locked by mutex1" << endl;
    sleep(1);
    mutex1.lock();
    qDebug() << "ThreadB"<< QThread::currentThreadId() << "locked by mutex2" << endl;
    mutex1.unlock();
    mutex2.unlock();
}


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ThreadA ta;
    ThreadB tb;
    ta.start();
    tb.start();

    return a.exec();
}
