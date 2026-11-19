//wap in which base class shape which contains a virtual function area and two derived 
    // class rectangle and circle which override the function to compute their respective
    // area 

    //virtual function provide a mean by which the function of the base class can be 
    //overriden by the function of the base class

#include<iostream>  
using namespace std;
class Shape{
    public:
     virtual void area(){
        cout<<"Area of shape"<<endl;
              }
};  
class Rectangle:public Shape{
    float length,bredth;
    public:
    Rectangle(float l,float b){
        
        length=l;
        bredth=b;
    }
    void area(){

        cout<<"Area of Rectangle is"<<length*bredth<<endl;
    }
};
class Circle:public Shape{
    float radius;
    public:
    Circle(float r){
        radius=r;
    }

    void area(){
        cout<<"Area of circle is:"<<3.14*radius*radius<<endl;

    }
    };
    int main(){
        Shape s;
        Rectangle r(5.0,3.0);
        Circle c(4.0);
        s.area();
        r.area();
        c.area();
        return 0;
        
        
    }



//Wap to create a class Person that contains data members as name ,age,gender
//in protected mode member function as getpersondata(),which asks the name age and gender and
//show person data which displays name ,age and gender.Create another class student that inherits person class
//in public mode containing data members as roll no and course ansd member fn as getdtudentdta 
//which will ask roll no and course and display rollno aND course.
//create another class Faculty that inherits person class in public mode and had its own data amember
//as designation and department functiomn void data which trakes user input for designation and department
//create another class name university that inherits both student and faculty class 
//university class will contain data member will contain no. of book,no of articles and no. of 
//patents it will have void getpublication data fn which will call person data and 
//faculty data fn.


#include<iostream>
using namespace std;
class Person{
    protected:
    string name;
    int age;
    string gender;
    public:
    void getpersondata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter gender:";
        cin>>gender;
    }
    void showpersondata(){
        cout<<"Person data:"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Gender:"<<gender<<endl;
    }
    };
class Student: virtual public Person{
    public:
       int rollno;
       string course;
       void getstudentdata(){
        cout<<"Enter roll no:";
        cin>>rollno;
        cout<<"Enter course:";
        cin>>course;
       }
         void showstudentdata(){
          cout<<"Student data:"<<endl;
          cout<<"Roll no:"<<rollno<<endl;
          cout<<"Course:"<<course<<endl;
         }

};
class Faculty: virtual public Person{
    public:
    string designation;
    string department;
    void getfacultydata(){
        cout<<"Enter designation:";
        cin>>designation;
        cout<<"Enter department:";
        cin>>department;
    }
    void showfacultydata(){
        cout<<"Faculty data:"<<endl;
        cout<<"Designation:"<<designation<<endl;
        cout<<"Department:"<<department<<endl;
    }
};
    class University: public Student,public Faculty{
        public:
        int book_no;
        int no_articles;
        int no_patents;
        void getpublicationdata(){
            Person::getpersondata();
            Student::getstudentdata();
            Faculty::getfacultydata();
            cout<<"Enter number of books published:";
            cin>>book_no;
            cout<<"Enter number of articles published:";
            cin>>no_articles;
            cout<<"Enter number of patents published:";
            cin>>no_patents;
        }


    };   
     int main(){
        University u;
        u.getpublicationdata();
        u.showpersondata();
        u.showfacultydata();
        cout<<"Number of books published:"<<u.book_no<<endl;
        cout<<"Number of articles published:"<<u.no_articles<<endl;
        cout<<"Number of patents published:"<<u.no_patents<<endl;
        return 0;
    }