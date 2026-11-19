//wap to create a class student where pvt members are 
//roll no and marks  using default and parameterised constructor alongwith 
//show()fn.to assign roll no and marks and display them.

// #include <iostream>
// using namespace std;
// class Student {

//     private :
//     int rollno;
//     int marks;

//     public:
//     Student (){  
        
//         rollno=10;   //default constructor
//         marks=80;
//     }
    
    
//     void setdata (int r,int m){
//         rollno=r;
//         marks=m;
//     }

//     void show(){
        
//         cout<<"The marks of the student is:"<<" "<<marks<<endl;
//         cout<<"The Roll number of the student is :"<<rollno<<endl;

//     }
//     } ; 

// int main()
// {
//     Student s;  //default constructor called
//     s.show();

//     Student s1;
//     s1.setdata(20,90);   //parameterised constructor called
//     s1.show();
//     return 0;
// }

// Wap to use the concept of object orienrted programming to keep the record of dvds available in a shop.
#include <iostream>
#include<string.h>
using namespace std;
class Shop{
    private :
    int dvdcode[10];
    string dvd[10];

    public:
    void setdata(int dcode[],string dv[]){
    for(int i=0;i<10;i++){
       dvdcode[i]=dcode[i];
       dvd[i]=dv[i];
    }
    }
    
    void getdata(){
        for(int i=0;i<10;i++){
        cout<<"The code of the dvd is :"<<" "<<dvdcode[i]<<" "<<endl;
        cout<<"The name of the dvd is :"<<" "<<dvd[i]<<" "<<endl;
        }
    }

};

int main()
{
    Shop s;
    int codes[10]={10,20,30,40,50,60,70,80,90,100};
    string name[10]={"Song","Game","Movies","Images","Anime","Cartoon","Pictures","Web Series","Cricket"
    ,"Football"};

    s.setdata(codes,name);
    s.getdata();
    return 0;
}

