#include <iostream>
#include<map>
using namespace std;

int main()
{
    map<int , int>ac;

   ac.insert({10001  , 4000});
   ac.insert({10003  , 9000});
   ac.insert({10002  , 6000});

     //Insert New values using []  operator

     ac[10004]=2000;
     ac[10005]=5000;

     //Updated values

     ac[10002]=3500;

     //Search for the account number
     int number=10002;
     auto it = ac.find(number);
     if(it != ac.end()){
        cout<<number<<" "<<"account number has balance"<<" "<<it->second<<endl;
     }
     else{
        cout<<number<<"Not Found"<<endl;
     }
    
    return 0;
}
