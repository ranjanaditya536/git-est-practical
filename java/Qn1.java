//create a class person with name and age as members. now create a another class students which inherits 
//person and add roll no to it and display it.

 class person {
    String name;
    int age;
}
 class student extends person {
    int rollNo;
}

public class Qn1 {
    public static void main(String[] args) {
        student s1 = new student();
        s1.name = "Alice";
        s1.age = 20;
        s1.rollNo = 123;
        System.out.println("Name: " + s1.name);
        System.out.println("Age: " + s1.age);
        System.out.println("Roll No: " + s1.rollNo);
    }
}