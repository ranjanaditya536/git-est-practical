// #include <iostream>
// #include<vector>
// using namespace std;

// int main(){
//     vector<int> v;

//     //for loop
//     for(int i=0;i<5;i++){
//         int element;
//         cin>>element;
//         v.push_back(element);
//         cout<<v[i]<<" ";
        
//     }
// cout<<endl;
//     //for each loop
//     for(int ele:v){
//         cout<<ele<<" ";
        
        
//     }
//     cout<<endl;

//     //while loop
//     int idx=0;
//     while(idx<v.size()){
//         cout<<v[idx++]<<" ";
//     }
//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
   v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}