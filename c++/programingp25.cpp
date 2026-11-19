// //wap to create a class known as student in which student roll no as private and student course as public and display the value of roll no and course in main function.
// //and there is puclic function void getrollno() from user input and assign the value to roll no and display the value of roll no in main function.
  
// #include <iostream>
// using namespace std;
// class Student{
//     private:
//     int rollno;

//     protected:
//     char course[20];

//     public:
//     void get_rollno(){
//         cout<<"Enter the roll number: ";
//         cin>>rollno;
//     }
//     void showroll(){
//         cout<<"Roll NO is:"<<" "<<rollno<<endl;;
//     }

// };

// class Result : public Student{
//     private:
//     int marks[3];
//     public:
//     void getdata();
//     int total();
//     void display()
//     {
//         showroll();
//         cout<<"Course:"<<" "<<course<<endl;
//         cout<<"Total Marks:"<<" "<<total()<<endl;;
//     }
// };

// void Result::getdata()
// {
//     get_rollno();
//     cout<<"Enter the course name: "<<endl;
//     cin.ignore(); 
//     cin.getline(course, 20); 
//     cout<<"Enter the marks of 3 subjects: "<<endl;
//     for(int i=0;i<3;i++)
//     {
//         cin>>marks[i];
//     }
// }

// int Result::total()
// {
//     int sum=0;
//     for(int i=0;i<3;i++)
//     {
//         sum+=marks[i];
//     }
//     return sum;
// }

// int main()
// {
// Result r;
// r.getdata();    
// r.display();

//     return 0;
// }

//Shorter way
// #include <iostream>
// using namespace std;

// class Student{
// protected:
//     int rollno;
//     string course;

// public:
//     void get_rollno(){
//         cout<<"Enter roll number: ";
//         cin>>rollno;
//     }

//     void showroll(){
//         cout<<"Roll No: "<<rollno<<endl;
//     }
// };

// class Result : public Student{
//     int m1,m2,m3;

// public:
//     void getdata(){
//         get_rollno();
//         cout<<"Enter course: ";
//         cin>>course;

//         cout<<"Enter 3 subject marks: ";
//         cin>>m1>>m2>>m3;
//     }

//     void display(){
//         showroll();
//         cout<<"Course: "<<course<<endl;
//         cout<<"Total Marks: "<<m1+m2+m3<<endl;
//     }
// };

// int main(){
//     Result r;
//     r.getdata();
//     r.display();
// }

/// create a program where the class name is animal with public member function sound
// and create a derived class inherited adn public  function activity
 
// #include <iostream>
// using namespace std;
// class Animal{
//   public :
//   string voice;

//       void sound(){
//          cout<<"Animal made a sound: "<<voice<<endl;
//       }
      

// };
// class Dog : public Animal{
//      public:
//      string activity;
//         void display(){
//             cout<<"Dog is performing : "<<activity<<endl;

//      }
// };
// int main()
// {
//     Animal a;
//     cout<<"Enter the sound of the animal: ";
//     cin>>a.voice;
//     a.sound();
   
//     Dog d;
//    cout<<"Enter the activity of the dog: ";
//    cin>>d.activity;
//     d.display();

//     return 0;
// }

// // wap with public data members base class student and create void studentinfo() 
// // which will take the stud name and roll no as input at the variable then create a 
// // derived class that inherits student class in public mode along with its own data member 
// // and the funtion is void getmarks and void displainfo which will display the student name roll no and 
// // marks of the student and it will chck if makes gr than 40 or less if less than 40
// // student is fail otherwise student is pass

// #include <iostream>
// using namespace std;

// // Base class
// class Student{
// public:
//     string name;
//     int roll_no;

//     void studentinfo(){
//         cout<<"Enter student name: ";
//         cin>>name;

//         cout<<"Enter roll number: ";
//         cin>>roll_no;
//     }
// };


// class Result : public Student{
// public:
//     int marks;

//     void getmarks(){
//         cout<<"Enter marks: ";
//         cin>>marks;
//     }

//     void displayinfo(){
//         cout<<"\nStudent Name: "<<name<<endl;
//         cout<<"Roll Number: "<<roll_no<<endl;
//         cout<<"Marks: "<<marks<<endl;

//         if(marks < 40){
//             cout<<"Student is Fail"<<endl;
//         }
//         else{
//             cout<<"Student is Pass"<<endl;
//         }
//     }
// };

// int main(){

//     Result r;

//     r.studentinfo();   // base class function
//     r.getmarks();      // derived class function
//     r.displayinfo();   // derived class function

//     return 0;
// }

// // wap to create a clsss employee where public data mem empid empslary the base clss will have 
// // basic info like get empinfo() tehn create a derived class developer that performs inheritence 
// // and has its own data member and void dispaly employee that contain info like salary 
// // da hra etc

// #include <iostream>
// using namespace std;

// // Base class
// class Employee{
// public:
//     int empid;
//     float empsalary;

//     void getEmpInfo(){
//         cout<<"Enter Employee ID: ";
//         cin>>empid;

//         cout<<"Enter Employee Salary: ";
//         cin>>empsalary;
//     }
// };
// class Developer : public Employee{
// public:
//     float da, hra;

//     void getAllowance(){
//         cout<<"Enter DA: ";
//         cin>>da;

//         cout<<"Enter HRA: ";
//         cin>>hra;
//     }

//     void displayEmployee(){
//         float total;

//         total = empsalary + da + hra;

//         cout<<"\nEmployee ID: "<<empid<<endl;
//         cout<<"Basic Salary: "<<empsalary<<endl;
//         cout<<"DA: "<<da<<endl;
//         cout<<"HRA: "<<hra<<endl;
//         cout<<"Total Salary: "<<total<<endl;
//     }
// };

// int main(){

//     Developer d;

//     d.getEmpInfo();       // base class function
//     d.getAllowance();     // derived class function
//     d.displayEmployee();  // display info

//     return 0;
// }

#include <iostream>
using namespace std;

class Student {
protected:
    int rollno;
    string name;
    string course;
    

public:
    void getdata() {
        cout << "Enter the Roll NO of student: ";
        cin >> rollno;

        cout << "Enter the name of student: ";
        cin >> name;

        cout << "Enter the course of student: ";
        cin >> course;
    }
};

class Marks : public Student {
protected:
    int marks[3];
    int total;

public:
    void getmarks() {
        cout << "Enter the marks of 3 subjects: ";
        for (int i = 0; i < 3; i++) {
            cin >> marks[i];
        }
    }

    void calculateTotal() {
        total = 0;
        for (int i = 0; i < 3; i++) {
            total += marks[i];
        }
    }
};

class Result : public Marks {
public:
    void display() {
        cout << "\nStudent Details\n";
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
        cout << "Total Marks: " << total << endl;
    }
};
int main() {
    Result r;              
    r.getmarks();                       
    r.calculateTotal();    
    r.getdata();           
    r.display();           
    return 0;
}