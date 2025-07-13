package DATA_STRUCTRE_ALGORITHM.Java_Practise;

class Student {
    String name ; 
    int marks ; 
    Student(String name,int marks){
        this.name  = name ; 
        this.marks = marks ; 
    }
    void display (){
        System.out.println("object is created ");
    }

}

public class one {
    public static void main(String[] args) {
        Student s = new Student("Govind",100 ); 
        s.display();
    }
}
