import java.util.Scanner;
public class Fibonacci{
  static int recfib(int n){
        if (n<=1)
          return n;
        return recfib(n-1)+ recfib(n-2);
  }

  static int nonrecfib(int n){
     int first=0,second=1,nxt;
    if(n==0){
      return first;
    }
      
       for(int i=2;i<=n;i++){
           nxt=first+second;
           first=second;
           second=nxt;
       }
      return second;
  }

  public static void main(String[] args){
    Scanner sc =new Scanner(System.in);

    System.out.println("Enter the value of n:");
    int n = sc.nextInt();

    int recfibNO=recfib(n);
    int nonrecfibNo=nonrecfib(n);

    System.out.println("Recursive output:"+ recfibNO);
    System.out.println("Non Recursive output:"+ nonrecfibNo);

    sc.close();

  }
}
