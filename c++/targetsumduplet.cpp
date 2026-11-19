// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//      int n,pairs=0;
//      cout<<"Enter the size of the vector: ";
//     cin>>n;
//     vector<int> v(n);
//     int target;
//     cin>>target;
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<v.size();i++){
//         for(int j=i+1;j<v.size();j++){
//             if(v[i]+v[j]==target){
//                 pairs++;


//             } 
//         }
//     }
//     cout<<pairs<<endl;
//     return 0;
// }

#include<iostream>
using namespace std;
int main (){
    int a[10][10];
    int b[10][10];
    int sum;
    int row,column;
    cout<<"Enter the row of the matrix:"<<endl;
    cin>>row;
    cout<<"Enter the column of the matrix:"<<endl;
    cin>>column;

    cout<<"Enter first matrix:"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>a[i][j];
        }
        }
        cout<<"Enter second matrix:"<<endl;
        for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cin>>b[i][j];
        }
        }
        cout<<"Sum of the matrix is:"<<endl;
  for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            sum =a[i][j]+b[i][j];
            cout<<sum<<" ";
        }
      }
      
    return 0;
      
}