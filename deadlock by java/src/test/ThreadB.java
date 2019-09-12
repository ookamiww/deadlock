package test;

public class ThreadB implements Runnable {
    @Override
    public void run() {
        synchronized (DeadLock.lock2){
            System.out.println("ThreadB locked by lock2");
            try {
                Thread.sleep(3000);
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            synchronized (DeadLock.lock1){
                System.out.println("ThreadB locked by lock1");
            }
        }
    }
}
