#include <iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    int target;
    int found=0;
    int index;
    int mid,low=0,high=n-1;
    cout<<"Enter target element:"<<endl;
    cin>>target;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==target){
           index=mid;
           cout<<"Element is found at"<<" "<<index<<endl;
           found=1;
           break;
        }
        else if(arr[mid]<target){
            low=mid+1;
            
        }
        else{
            high=mid-1;
        }
        
        
    }
    if(found==0){
        cout<<"Element not found"<<endl;
    }
     
    return 0;
}