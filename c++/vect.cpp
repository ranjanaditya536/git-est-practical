#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            cout<<"The elements are not in ascending order"<<endl;
            return 0;
        }
    }
     cout<<"The elements are in ascending order"<<endl;
    return 0;
}