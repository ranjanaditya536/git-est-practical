#include <iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
   

    s.insert(1);
     s.insert(2);
      s.insert(3);
       s.insert(1);   //duplicate

       cout<<endl;

       cout<<"The entered sets are:"<<endl;
       for(int x:s){
        cout<<x<<" ";
       }

       s.erase(2);
       cout<<"The value after erasing:"<<endl;
       for(int x:s){
        cout<<x<<" ";
       }

//         s.insert(10);
//      s.insert(20);
//       s.insert(30);
//        s.insert(40);
//         s.insert(50);
// for(int i =0;i<s.size();i++){
// int a =s.find(10);
// }

    return 0;
}