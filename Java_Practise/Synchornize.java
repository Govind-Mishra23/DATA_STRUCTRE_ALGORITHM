package DATA_STRUCTRE_ALGORITHM.Java_Practise;
import java.util.*;
import java.lang.*;
import java.io.*;

class Table {
    void printTable(int n){
        for(int i = 1 ; i<=5; i++){
            System.out.println(n*i);
        }
        try {
            Thread.sleep(400) ; 
        } catch (Exception e) {
             System.out.println(e);
        }
    }
}

class myThread1 extends Thread {
    Table t ; 
    myThread1(Table t) {
        this.t = t ; 
    }
    public void run (){
        t.printTable(5);
    }
}

class myThread2 extends Thread {
    Table t ; 
     myThread2(Table t) {
        this.t = t ; 
    }
    public void run (){
        t.printTable(5);
    }  
}

public class Synchornize {
    public static void main(String[] args) {
        Table obj = new Table () ; // default constructer
        myThread1 th1 = new myThread1(obj) ; 
        myThread2 th2 = new myThread2(obj) ; 
        th1.start();
        th2.start();

    }
    
}
