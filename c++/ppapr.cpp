// #include<iostream>
// #include<new>
// using namespace std;
// int main(){
//     int *ptr=new int;
//     cout<<"Enter a number: ";
//     cin>>*ptr;
//     cout<<*ptr<<endl;
//     delete ptr;
//     return 0;
// }


//wap to display marks of 4 subjects using dynamic memory allocation

#include<iostream>
#include<new>
using namespace std;
int main(){
    int *marks=new int[5];
    cout<<"Enter the marks of 5 subject:"<<" "<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];


    }
    cout<<"The marks of 5 subjects are:"<<" ";
      for(int i=0;i<5;i++){
        cout<<marks[i]<<" ";
      }
      return 0;
}