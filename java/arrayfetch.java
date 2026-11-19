import java.util.Scanner;
public class arrayfetch {
    public static void main(String [] args){

    Scanner sc =new Scanner(System.in);

        int n,position;
        System.out.println("Enter the number of elements of array:");
        n = sc.nextInt();
        System.out.println("Enter the position of the element to fetch:");
        position = sc.nextInt();

        int [] arr = new int[n];
        System.out.println("Enter the elements of the array:");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        if(position >= 0 && position < n){
            System.out.println("The element at position " + position + " is: " + arr[position]);
        } else {
            System.out.println("Invalid position!");
        }
        sc.close();}
}
