#include <iostream>
using namespace std;

int main()
{
    int n;
    int start,end;
    cout<<"Enter number of elements "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    start=0;
    end=n-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
    cout<<"The reversed array is:"<<" "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }   
    return 0;
}