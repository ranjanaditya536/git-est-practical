// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter the no of rows: ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for (int j =1; j<=i; j++)
//         {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     for(int k=n;k<0;k--){
//         for(int m=n;m<k;m--){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

#include <stdio.h>
int main() {
    int n, first, last;
    scanf("%d", &n);
    last = n % 10;
    while (n >= 10){ n /= 10;
    first = n;}
    printf("First digit of entered value is: %d\n", first);
    printf("Last digit of entered value is: %d\n", last);
    return 0;
}
