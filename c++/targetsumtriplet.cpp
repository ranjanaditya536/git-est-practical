#include <iostream>
#include <vector>
using namespace std;

int main()
{
     int n,pairs=0;
     cout<<"Enter the size of the vector: ";
    cin>>n;
    vector<int> v(n);
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            for(int k=j+1;k<v.size();k++){
            if(v[i]+v[j]+v[k]==target){
                pairs++;


             } 
           }
        }
    }
    cout<<pairs<<endl;
    return 0;
}


