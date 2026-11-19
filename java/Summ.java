import java.util.Scanner;
  public class Summ {
     public static void main(String args[]) {
       Scanner sc = new Scanner(System.in);
        double a, b, sum;
       System.out.print("Enter value of a and b: ");
        a = sc.nextDouble();
        b = sc.nextDouble();
           sum = a + b;

        System.out.println("The sum of a and b is: " + sum);
         sc.close();
    }
}