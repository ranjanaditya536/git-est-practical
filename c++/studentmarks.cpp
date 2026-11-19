// #include <iostream>
// #include<vector>
// using namespace std;

// int main()
// {
//     int n=5;
//     cout<<"Enter number of students :"<<" "<<endl;
//     cin>>n;
//     vector<int> s(n);

//    s.push_back(55);
//    s.push_back(81);
//    s.push_back(72);
//    s.push_back(65);
//    s.push_back(76);

//    cout<<"The marks of the students are:"<<" "<<endl;
//    for(int i=0;i<n;i++){
//     cout<<s[i]<<endl;
//    }
// cout<<"Enter the index to update:"<<endl;
//     return 0;
// }

#include <iostream>
#include <stack>
int main() {
using namespace std;    
stack<int> s;
s.push(10);
s.push(20);

cout << s.top()<<endl;  // 20
s.pop();
cout << s.top();  // 10
}