#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the rotation number: "<<endl;
    cin>>k;
    k=k%n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int ansarray[n];
    int j=0;

    for(int i=n-k;i<n;i++){
        ansarray[j++]=a[i];
    }

    for(int i=0;i<=k;i++){
        ansarray[j++]=a[i];
    }
 for(int i=0;i<n;i++){
        cout<<ansarray[i]<<" ";
    }
   
    return 0;
}