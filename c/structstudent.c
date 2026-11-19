// #include <stdio.h>
// struct Student{
//     float marks;
//     int rollNo;
//     char name[30];
// };
// int main() {
//     struct Student s[5];
//     int topIndex=0;

//     for(int i=0;i<5;i++){
//         printf("Enter the name,rollNo,and marks of the student %d:\n",i+1);

//         getchar();  // clear leftover newline before reading string
//         scanf("%[^\n]", s[i].name);

//         scanf("%d",&s[i].rollNo);
//         scanf("%f",&s[i].marks);

//         if(s[i].marks > s[topIndex].marks){
//             topIndex=i;
//         }
//     }

//     printf("\nTopper is: %s (Roll NO:%d) with marks %.2f",
//            s[topIndex].name, s[topIndex].rollNo, s[topIndex].marks);

//     return 0;
// }


#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    if(arr==NULL){
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("You entered:\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;



}