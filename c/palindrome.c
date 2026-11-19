// #include <stdio.h>
// #include <string.h>
// int main() {
//     char str[100];
//     int len,flag=0;
//     printf("Enter the string:");
//     fgets(str,sizeof(str),stdin);
//        str[strcspn(str,"\n")]='\0';
//     len=strlen(str);
//     for(int i=0;i<len/2;i++){
//         if(str[i]!=str[len-i-1]){
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0)
//         printf("PALINDROME STRING\n");
//     else 
//         printf("NOT A PALINDROME STRING\n");
    
// }


// #include <stdio.h>

// int main() {
//    int row;
//    for(int i=1;i<=5;i++){
//        for(int j=1;j<=i;j++){
//            printf("%d",j);
//            }
//            printf("\n");
//    }
// for(int j=4;j>=1;j--){
//    for(int i=1;i<=j;i++){
//        printf("%d",i);
//    }
//    printf("\n");
// }
//     return 0;
// }


#include <stdio.h>

int main() {
    for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    for(int i=2;i<=5;i++){
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");

    }

    return 0;
}