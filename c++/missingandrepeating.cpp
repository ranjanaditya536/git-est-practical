#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int freq[n+1]={0};

    cout<<"Enter"<<n<<"numbers"
    <<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>=1 && arr[i]<=n){
        freq[arr[i]]++;
    }
}
    for(int i=1;i<=n;i++){
        if(freq[i]>1){
            cout<<"Repeating elements is:"<<i<<endl;
        }
    }

    for(int i=1;i<=n;i++){
        if(freq[i]==0){
            cout<<"Missing elements is:"<<i<<endl;
        }
    }

    return 0;
}