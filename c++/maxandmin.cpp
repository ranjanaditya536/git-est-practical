#include <iostream>
#include<climits>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    int max=INT_MIN,min=INT_MAX;
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        }
        for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
        }
        cout<<"Maximum is "<<max<<endl;
        cout<<"Minimum is "<<min<<endl;
    

    return 0;
}