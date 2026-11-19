public class exceptionn{
    
    public static void main(String[] args) { 
        
        String name[]= new String[5];
        int rollno[]= new int[5]  , b;
       

        try{
            for(int i=0;i<=5;i++){
                name[i]= "Student "+i;
                rollno[i]= i+1;

                b=10/0;
 System.out.println(name[i] +" " + rollno[i]);
                                   }
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println("Array index is out of bounds. Please check the array size.");   

        }

        catch(Exception e){
            System.out.println("An error occurred: " + e.getMessage());
        }
    }}


        //  Code 1

// import java.util.Scanner;

//  public class exceptionn{
    
//    public static void main(String[] args) {
//     Scanner sc= new Scanner(System.in);
//     System.out.println("Enter first number");
//     int a= sc.nextInt();
//     System.out.println("Enter second number");
//     int b= sc.nextInt();
//     try{
//         int c=a/b;
//         System.out.println("The result is: " + c);
//     }catch(Exception e){
//         System.out.println(e.getMessage());

//    }sc.close();
//     }
    
//  }


        //  Code 2

// public class exceptionn{
//     public static void main(String[] args) {
//        String name =  null;

//        try {
//         System.out.println(name.length());
//        }

//        catch(NullPointerException e){
//         System.out.println("NullPointerException occurred: " + e.getMessage());
//        }
//     }
// }       

       //Code 3

// public class exceptionn{
//     public static void main(String[] args) {

//         try{
//             int number = Integer.parseInt("abc");
//         }catch(NumberFormatException e){
//             System.out.println("NumberFormatException occurred: " + e.getMessage());
//         }
//     }
// }       

        //Code4
// public class exceptionn{
    
//     public static void main(String[] args) {
//         System.out.println("A");
//         int result;

//         try{
//             System.out.println("B");
//             result = 10/0;
//             System.out.println("C");
//         }
//         catch(ArithmeticException e){
//             System.out.println("ArithmeticException occurred: " + e.getMessage());
//             System.out.println("D");
//         }
//     }
// }





