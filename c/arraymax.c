#include <stdio.h>
#include<limits.h>

int main()
{
  int arr[10];
  int max=INT_MIN;
  printf("Enter the elements of array:");
    for(int i=0;i<10;i++){
  scanf("%d",&arr[i]);
    }
    printf("THE ELEMENTS OF THE ARRAY ARE:");
  for(int i=0;i<10;i++){
      printf("%d  ",arr[i]);
  }
      
       for(int i=0;i<10;i++){
          if(max<arr[i]){
              max=arr[i];
          } 
       }
  printf("THE MAXIMMUM FROM THE ARRAY IS :%d",max);
  
  
    return 0;
}