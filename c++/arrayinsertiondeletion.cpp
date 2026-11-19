// // Array Insertion
// #include <iostream>
// using namespace std;

// int main()
// {
// int n,pos,val;
// cout<<"Enter the number of elements:"<<endl;
// cin>>n;
// int arr[n];
// cout<<"Enter the elements of array:"<<endl;
// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }
// cout<<"Enter the position of element:"<<endl;
// cin>>pos;
// cout<<"Enter the value of insert:"<<endl;

// cin>>val;

// for(int i=n;i>pos;i--){      //1 2 3 4 5  
//     arr[i]=arr[i-1];

// }
//    arr[pos]=val;
//    n++;
// cout<<"Array after insertion :"<<endl;
//    for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
//    }
//     return 0;
// }



//Array deletion

#include <iostream>
using namespace std;

int main()
{
    int n,pos;
    cout<<"Enter the number of elements :";
    cin>>n;
    
    cout<<"Enter the position to delete"<<endl;
    cin>>pos;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;

    cout<<"Array after deletion:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" "<<endl;
        return 0;
}