// #include<stdio.h>
// int main(){
//     int i;
//    int  a[5]={1,2,3,4,5};
//     int*p=a;
//     for(int i=0;i<5;i++){
//         printf("%d  ",*(a+i));    
//         p++;
    
//     }
//     return 0;
// }


// #include<stdio.h>
// int main(){
//     int x=10,y=20,z=30;
//     int *arr[3];
//     arr[0]=&x;
//     arr[1]=&y;
//     arr[2]=&z;
//     for(int i=0;i<3;i++){
//         printf("\nThe values are");
//         printf("\n%d",*arr[i]);
// }}

// #include<stdio.h>
// void fun(int*,int*);
// int main(){
//     int a=10,b=20;
//     printf("Values Before calling %d %d\n",a,b);
//     fun(&a,&b);
//     printf("Values After calling %d %d",a,b);

// }
// void fun(int *x,int* y){
//    *x=11;
//    *y=22;

// }


// #include<stdio.h>
// void fun(int*a){
//     (*a)++;
// }
// int main(){
//     int *p,a=10;
//     p=&a;
//     fun(p);
//     printf("the output is: %d\n",*p);

// }


// #include<stdio.h>
// void display();
// int main(){
//     auto int a=10;
//     printf("the value of A is %d\n",a);
//     display();
//     printf("\n the value of A in main is %d",a);
// }
//    void display(){
// auto int a=20;
// printf("the value of A is %d",a);
// }

// #include<stdio.h>
// void display();
//  //static global variable
// int main(){
//    display();
//    display();
//    display();

// }
//    void display(){
//     static int a=1;
//     printf("the value of a is %d\n",a);
//     a++;
//    }
// #include<stdio.h>
// void display();
//  int a=10;
//  int main(){
//     printf("the value of a in main is %d\n",a);
//     increment();
//     display();
//     printf("the value of a in main after increment is %d\n",a);

//  }
//  void increment(){
//     a=20;

//  }
//  void display(){
//     printf("the value of a in display is %d\n",a);
//  }

//use of void pointer
#include<stdio.h>
int main(){
   int a=5;
   float b=5.5;
   void *p;
   p=&a;
   printf("Teh value of a is %d\n",*(int*)p);
   p=&b;
   printf("The value of b is %.2f\n",*(float*)p);
   return 0;
}