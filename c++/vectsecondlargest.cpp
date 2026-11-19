#include <iostream>
#include <vector>
#include<climits>
using namespace std;

int main()
{
    int n;
    int max=INT8_MIN,min=INT8_MAX;
    cout<<"Enter the size of vector"<<endl;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    for(int i=0;i<n;i++){
if(v[i]==max){
    v[i]=-1;
}
    }
        
     int max2=INT8_MIN;
     for(int i=0;i<v.size();i++){
        if(max2<v[i]){
            max2=v[i];
        }
    }
    
        cout<<max2;
    

    return 0;
}