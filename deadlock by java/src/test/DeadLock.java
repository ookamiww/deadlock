package test;

public class DeadLock {


    public static final String lock1 = "lock1";
    public static final String lock2 = "lock2";

    public static void main(String[] args) {
        Thread a = new Thread(new ThreadA());
        Thread b = new Thread(new ThreadB());
        a.start();
        b.start();
    }

}
