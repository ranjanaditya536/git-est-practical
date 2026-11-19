#include <iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[8]={-5,-4,6,15,8};
    int n=5;    
    int currsum=0;
    int max=INT8_MIN;

for(int i=0;i<n;i++){
    currsum+=arr[i];

    if(currsum>max){
        max=currsum;
    }
    if(currsum<0){
        currsum=0;
    }
}
    cout<<"The max sum subarray is: "<<" "<<max<<endl;
    return 0;
}