// create a class named employee and create snother class names salary which inherits emp in
//  public mode and this class will display the specilasition , designation and calc their 
// salary the derived class will display the empl information along with designationn and 
// salary details

// #include <iostream>
// using namespace std;
// class Employee{
//     private :
//     string name;
//     int empid;

//     public:
//     void getEmpInfo(){
//         cout<<"Enter Employee Name: ";
//         cin>>name;

//         cout<<"Enter Employee ID: ";
//         cin>>empid;
//     }
//     void displayEmpInfo(){
//         cout<<"\nEmployee Name: "<<name<<endl;
//         cout<<"Employee ID: "<<empid<<endl;
//     }


   
// };

// int main()
// {
//     Employee e;
//     e.getEmpInfo();
//     e.displayEmpInfo();

//     return 0;
// }






#include <iostream>
#include <unordered_map>
using namespace std;

int main() {

    int Q;
    cin >> Q;

    unordered_map<string, long long> city;

    while (Q--) {

        string command;
        cin >> command;

        if (command == "CREATE") {
            string name;
            long long population;
            cin >> name >> population;

            city[name] = population;
        }

        else if (command == "READ") {
            for (auto it = city.begin(); it != city.end(); it++) {
                cout << it->first << " " << it->second << endl;
            }
        }

        else if (command == "UPDATE") {
            string name;
            long long population;
            cin >> name >> population;

            if (city.find(name) != city.end()) {
                city[name] = population;
            } 
            else {
                cout << "City Not Found" << endl;
            }
        }

        else if (command == "DELETE") {
            string name;
            cin >> name;

            if (city.find(name) != city.end()) {
                city.erase(name);
            } 
            else {
                cout << "City Not Found" << endl;
            }
        }
    }

    return 0;
}