#include <iostream>
using namespace std;

int main()
{
    int n;
    int count=0;
    bool flag=false;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int target;
   cin>>target;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            flag =true;
            count++;
            cout<<"Target element"<<" "<< target<<" "<<"is found at index"<<" "<<i<<endl;
            
        }
        
    }
    if(flag==false){
        cout<<"Element NOT FOUND"<<endl;
    }
    cout<<"Element has occured"<<" "<<count<<" "<<"times"<<endl;
    return 0;
}