#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int x:v){
        cout<<x<<" "<<endl;
    }

    cout<<"The size of the vector is: "<<" "<<v.size()<<endl;
    cout<<"The new size is :"<<" "<<v.size()<<endl;
    v.push_back(50);
    cout<<"The new size of the vector is: "<<" "<<v.size()<<endl;
    cout<<"The capacity of the vector is"<<" "<<v.capacity()<<endl;
    cout<<"Front element is:"<<" "<<v.front()<<endl;
    v.insert(v.begin()+2,5);
    cout<<"Elements after insertion:"<<endl;
    for(int x:v){
        cout<<x<<" "<<endl;
    }

    
    return 0;
}