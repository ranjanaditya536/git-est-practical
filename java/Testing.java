 //use three classes to demonstrare add and subtraction of two numbers using inheritence
 class operation {
     int num1, num2;
     void getdata(int a, int b) {
         num1 = a;
         num2 = b;
     }
}
class add extends operation {
    int sum;
    void calculate() {
        sum = num1 + num2;
        System.out.println("Sum: " + sum);
    }
}
class sub extends operation{
    int sub;
    void calculate(){
        sub = num1 - num2;
        System.out.println("Difference is:" + sub);
   }
}
public class Testing{
    public static void main(String[] args) {
        
        add a1 = new add();
        sub s1 = new sub();

        a1.getdata(10, 5);
        a1.calculate();

        s1.getdata(10, 5);
        s1.calculate();     
    }    
}







