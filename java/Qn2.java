 // create a class employee with name and salary create a class manager which inherits 
 // employee and display it

 
 class employee {
    String name;
    double salary;
}

class manager extends employee {
    String department;
}
public class Qn2 {
    public static void main(String[] args) {
        manager m1 = new manager();
        m1.name = "Luke";
        m1.salary = 50000;
        m1.department = "Sales";
        System.out.println("Name: " + m1.name);
        System.out.println("Salary: " + m1.salary);
        System.out.println("Department: " + m1.department);
    }
}