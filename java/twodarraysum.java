import java.util.Scanner;
public class twodarraysum {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the number of rows of the user choice:");
        int rows = sc.nextInt();

        System.out.println("Enter the number of columns:");
        int cols = sc.nextInt();

        int[][] arr = new int[rows][cols];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        int sum = 0;
        for (int i = 0; i<rows; i++) {
            for (int j = 0; j<cols; j++) {
            sum += arr[i][j];
            }
        }
        System.out.println("The sum of all elements in the array is: " +sum);
        sc.close();
    }
}


