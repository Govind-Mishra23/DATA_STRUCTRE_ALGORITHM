package DATA_STRUCTRE_ALGORITHM.Java_Practise;

// thread implement using runnable interface 

class A implements Runnable {
    public void run (){
        System.out.println("A thread is running");
    }
}
class  B implements Runnable {
    public void run (){
        System.out.println("B thread is running");
    }
}

class C extends Thread {
    public void run () {
        System.out.println("c thread is running now ");
    }
}

class  D extends Thread {
   public void run (){
    System.out.println("d thread is running now");
   }
    
}

public class ThreadsImp {
    public static void main(String[] args) {
        A a = new A() ; 
        B b = new B() ; 
        // Thread th1 = new Thread(a);
        // Thread th2 = new Thread(b) ; 

        // th1.start();
        // th2.start(); 

        C c = new C () ; 
        D d = new D() ; 
        c.start();d.start();
    }
    
}
