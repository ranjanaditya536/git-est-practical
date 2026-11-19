// #include <iostream>
// #include<vector>
// using namespace std;

// void sortZeroesAndOnes(vector<int> &v){
//     int Zeroes_Count=0;
//     for(int ele:v){
//         if(ele==0){
//            Zeroes_Count++;
//         }
//     }
//     for(int i=0;i<v.size();i++){
//         if(i<Zeroes_Count){
//             v[i]=0;
//         }
//         else{
//             v[i]=1;
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int ele;
//         cin>>ele;
//         v.push_back(ele);
//     }
//     sortZeroesAndOnes(v);
//     return 0;
// }


// Two pointers approach

#include <iostream>
#include<vector>
using namespace std;

void  sortZeroesAndOnes(vector<int>  &v){
    int left_ptr=0;
    int right_ptr=v.size()-1;

    while(left_ptr<right_ptr){
        if(v[left_ptr]==1  &&  v[right_ptr]==0){
            v[left_ptr++]=0;
            v[right_ptr--]=1;
    }
    v[left_ptr++]=0;
    v[right_ptr--]=1;
}
if(v[left_ptr]=0){
    left_ptr++;
}
if(v[right_ptr]=0){
    right_ptr--;
}
}
int main()
{
    int n;
    cin>>n;
    vector<int>  &v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortZeroesAndOnes(v);
    return 0;
}