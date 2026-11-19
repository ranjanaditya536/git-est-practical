// #include <iostream>
// #include <string.h>
// using namespace std;
// class Student {
//     private :
//     char name[50];
//     float marks[3];
//     int rollno;
//     float total;

//     public:
//     void setdata(int r,char *n,float m1,float m2,float m3){
//         rollno=(r);
//         strcpy(name,n);
//         marks[0]=m1;
//         marks[1]=m2;
//         marks[2]=m3;
//         total=m1+m2+m3;
// }
//     void displaydata(){
//         cout<<"The name of the student is:"<<" "<<name<<endl;
//         cout<<"The Roll number of the student is :"<<rollno<<endl;
//         for(int i=0;i<3;i++){
//         cout<<"The marks of the student is "<<marks[i]<<endl;
//         }
//         cout<<"The total of the student:"<<total<<endl;
//     }        
//     };



// int main()
// {
//     Student s1;
//     s1.setdata(1234,"XYZ",85.0,90.5,95.0);
//     s1.displaydata();
//     return 0;
// }


#include <iostream>
using namespace std;

class Supermart{
    private:
    int prodcode[4];
    float price[4];
    int total=0;

    public:
    
    void setdata(int pcode[],float pr[]){
        for(int i=0;i<4;i++){
            prodcode[i]=pcode[i];
            price[i]=pr[i];
        }
    }

    void getdata(){
        for(int i=0;i<4;i++){
            cout<<"The product code of item "<<i+1<<" "<<"is"<<" "<<prodcode[i]<<endl;
            cout<<"The price of item "<<i+1<<" "<<"is"<<"  "<<price[i]<<endl;

        }
    }
    void calculatebill(float pro[]){
        for(int i=0;i<4;i++){
            total+=pro[i];
        }
        cout<<"The total bill is :"<<total<<endl;
    }

};

int main()
{
    Supermart s;
    
    int codes[4] = {111, 112, 113, 114};
    float prices[4] = {35.5, 40.5, 60, 15};

    s.setdata(codes, prices);
    s.getdata();
    s.calculatebill(prices);
    return 0;
}


