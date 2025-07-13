package DATA_STRUCTRE_ALGORITHM.Java_Practise;

// multilevel inheritance using interface 

interface A {
  public void printA () ; 
     
}

interface B {
  public void printB () ; 
     
}
class inhertiPropertyEx implements A, B {
    public void printA (){
        System.out.println(" i am a");
    }
     public void printB (){
        System.out.println(" i am b");
    }

}
public class InterfaceOne {
    public static void main(String[] args) {
        inhertiPropertyEx obj = new inhertiPropertyEx() ; 
        obj.printA();
    }
    
}
