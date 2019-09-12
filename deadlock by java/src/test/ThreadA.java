package test;

public class ThreadA implements Runnable {

    @Override
    public void run() {
        synchronized (DeadLock.lock1){
            System.out.println("ThreadA locked by lock1");
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            synchronized (DeadLock.lock2) {
                System.out.println("ThreadA locke by lock2");
            }
        }
    }
}
