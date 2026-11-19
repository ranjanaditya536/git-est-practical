#include<stdio.h>
#include<limits.h>
int main (){
    int arr[8];
    int max=INT_MIN,secondmax=INT_MIN;
    printf("Enter 8 elements in the array:");
    for(int i=0;i<8;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<8;i++){
        if(max<arr[i]){
            secondmax=max;
            max=arr[i];

        }
        else if(arr[i]>secondmax && arr[i]!=max){
            secondmax=arr[i];
        }
        }
        printf("Second maximum element is %d",secondmax);
    return 0;
    }
