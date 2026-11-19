#include<iostream>
using namespace std;
int main()
{
    int n=7;
    int freq=0;
    int a[n];
    int dup[7];
    int d=0;
    cout<<"Enter seven elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
            freq++;
            dup[d++]=a[j];
            for(int k=j;k<n-1;k++){
                a[k]=a[k+1];
            }
            n--;
            j--;
    }
   }
    }
    cout<<"Array after removing duplicates is "<<" "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<endl;
    }
    cout<<" Duplicates are ";
    for(int i=0;i<d;i++){
        cout<<dup[i]<<endl;
    }
    cout<<"The frequency of duplicates is "<<" "<<freq<<endl;
    return 0;
}