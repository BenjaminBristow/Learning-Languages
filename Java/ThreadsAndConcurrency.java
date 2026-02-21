package Java;

/******* THREADS AND CONCURRENCY ******/

public class ThreadsAndConcurrency {

    /******* EXTENDING THREAD ******/

    static class MyThread extends Thread {
        public void run(){
            for(int i=0; i<3; i++){
                System.out.println(Thread.currentThread().getName() + " is running: " + i);
            }
        }
    }

    /******* IMPLEMENTING RUNNABLE ******/

    static class MyRunnable implements Runnable {
        public void run(){
            for(int i=0; i<3; i++){
                System.out.println(Thread.currentThread().getName() + " Runnable: " + i);
            }
        }
    }

    public static void main(String[] args){

        MyThread t1 = new MyThread();
        t1.setName("Thread-1");
        t1.start(); // start thread

        Thread t2 = new Thread(new MyRunnable());
        t2.setName("Thread-2");
        t2.start();

        /******* NOTES ******/

        // Threads allow multiple tasks concurrently
        // Use synchronized blocks to avoid race conditions
        // Thread vs Runnable: Runnable preferred when extending another class
    }
}