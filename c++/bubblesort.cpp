// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout<<"Enter the number of elements:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     cout<<"The sorted array is:"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//         return 0;
// }



//  Optimised bubble sort

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=0 ; i<n ;i++){
    cin>>arr[i];
}
    for(int i=0 ; i<n-1 ; i++){
        bool swapped = false;

        for(int j=0 ; j<n-1-i ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }
        }
        if (swapped==false)
        break;
    }

    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}