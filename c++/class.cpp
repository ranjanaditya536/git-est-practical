// #include <iostream>
// using namespace std;

// class Student{
//     public:
//       string name;
//       int rollNo;

//       void display(){
//         cout<<"Name:"<<" "<<name<<endl;
//         cout<<"Roll Number:"<<" "<<rollNo<<endl;
//       }
// };
// int main()
// {
//     Student s;
//     s.name="Rahul";
//     s.rollNo=100;
//     s.display();
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Rectangle{
//     public:
      
//       int length,breadth;

//       int area(){
//        return length*breadth;
//       }
// };
// int main()
// {
//      Rectangle r;
//   r.length = 5;
//     r.breadth = 10;
//      cout<<"Area of rectangle is:"<<" "<<r.area()<<endl;
//     return 0;
// }
// #include <iostream>
// #include<string>
// using namespace std;

// class Student{
//     private:
//   string name;
//   int age;
//   char grade;

//   public:
//   Student(string n,int a,char g){
//     name n;
//     age a;
//     grade g;
//   }

//   void displaydetails(){
//     cout<<"Student name:"<<name<<endl;
//      cout<<"Student age:"<<age<<endl;
//       cout<<"Student grade:"<<grade<<endl;

//   }
// };
// int main()
// {
//     Student student("XYZ",20,'A');

//         return 0;
// }


// #include <iostream>
// using namespace std;
// class BankAccount{
//     public:
//     int accNo;
//     float balance;
//     void deposit(float amt){
//         balance+=amt;
//     }
//     void withdraw(float amt){
//         if (amt<=balance)
//         balance-=amt;
//         else
//         cout<<"Insufficient Balance"<<endl;
//     }
//     void display(){
//         cout<<"Account Number"<<" "<<accNo<<endl;
//         cout<<"Balance"<<" "<<balance<<endl;
//     }
// };

// int main()
// {
//     BankAccount b;
//     b.accNo=12345;
//     b.balance=2000;
//     b.deposit(500);
//     b.withdraw(200);
//     b.display();

//    return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// class BankAccount{
//     private:
//     int accountNumber;
//     double balance;
//     string accountholderName;

//     public:
//     BankAccount(int accNo,string name,double initialbalance){
//         accountNumber=accNo;
//         accountholderName=name;
//         balance=initialbalance;
//     }
//     void deposit(double amount){
//         if(amount>0){
//             balance+=amount;
//             cout<<"Deposit successful"<<" "<<endl;
//         }
//         else{
//             cout<<"Invalid amount"<<" "<<endl;

//         }
//     }
//     void withdraw(double amount){
//         if(amount>0&&amount<=balance){
//             balance-=amount;
//             cout<<"Withdraw Successful"<<endl;
//         }
//         else{
//             cout<<"Insufficient balance"<<endl;
//         }
//     }

//     void displayAccountdetails(){
//         cout<<"Account Number:"<<" "<<accountNumber<<endl;
//         cout<<"Account Holder Name:"<<" "<<accountholderName<<endl;
//         cout<<"Account Balance:"<<" "<<balance<<endl;

//     }
// };
// int main()
// {
//     BankAccount acc1(1010,"Amit",5000);
//     acc1.deposit(1500);
//     acc1.withdraw(2000);

//     acc1.displayAccountdetails();

//     return 0;
// }

#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    float basic;
    float gross;
    
    float grossSalary(){
        float hra=basic*0.2;
        float da=basic*0.1;
        float gross=basic+hra+da;
    }
    void display(){
        cout<<"Name"<<" "<<name<<endl;
         cout<<"Basic Salary"<<" "<<basic<<endl;
          cout<<"Gross Salary"<<" "<<gross<<endl;

    }
};

int main()
{
    return 0;
}

