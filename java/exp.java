// import java.util.Scanner;
// public class exp {
//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);

//         double a,b,c,d,root1,root2;

//         System.out.println("Enter a , b ,c");

//         a = sc.nextDouble();
//         b = sc.nextDouble();
//         c = sc.nextDouble();

//      d = b*b -  4*a*c;

//      if(d>0){
//         root1 = (-b+Math.sqrt(d))/(2*a);
//         root2 = (-b-Math.sqrt(d))/(2*a);

//         System.out.println("Roots are"+ root1 + "and"+ root2);
//      }
//      else if(d==0){
//         root1 = -b/2*a;
//         System.out.println("Root is :"+ root1);
//      }
//      else {
//         System.err.println("no real solution");
//      }
// sc.close();
//     }
// }


// import java.util.Scanner;
// public class exp{
    
//     static int recrfib(int n){
//         if(n<=1){
//             return n; 
//         }
//         return recrfib(n-1)+recrfib(n-2);
//     }
// static int nrecrfib(int n){
//     int first=0,second=1,next;
//     if(n==0){
//         return first;
//     }
//     for(int i =2;i<=n;i++){
//     next=first+second;
//     first=second;
//     second=next;
//     }
//     return second;
// }
// public static void main(String[] args) {
//     Scanner sc=new Scanner(System.in);

//     System.out.println("Enter the value of n:");
//     int n=sc.nextInt();
//     int recrfib= recrfib(n);
//     int nonrecrfib = nrecrfib(n);

//     System.out.println("The non rec fib is:"+nonrecrfib);
//     System.out.println("The recr fib is: "+recrfib);
//     sc.close();
// }
// }


import java.util.Scanner;
public class exp{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int r1,c1,r2,c2;
        System.out.println("Enter the number of row of first matrix:");
        r1=sc.nextInt();
          System.out.println("Enter the number of columns of first matrix:");
        c1=sc.nextInt();
         System.out.println("Enter the number of row of second matrix:");
        r2=sc.nextInt();
          System.out.println("Enter the number of columns of second matrix:");
        c2=sc.nextInt();

        if(c1!=r2){
            System.out.println("Matrix multiplication is not possible");
            sc.close();
            return;
        }
        int[][]matrix1 = new int [r1][c1];
        int[][]matrix2 = new int [r2][c2];

        System.out.println("Enter the elements in first matrix:");
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                matrix1[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter the elements in second matrix:");
         for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                matrix2[i][j]=sc.nextInt();
            }
        }

        int[][]result = new int[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                for(int k=0;k<c1;k++){
                  result[i][j]+=matrix1[i][k] * matrix2[k][j];
                }
            }
        }
        System.out.println("The resultant matrix is :");{
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    System.out.print(result[i][j]+" ");
                }
                 System.out.println();
            }
        }
       
        sc.close();
    }
}