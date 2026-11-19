#include <iostream>
#include<vector>
using namespace std;

vector<int> countsort(vector<int>&arr){
    int n =arr.size();

    int maxval=0;
    for(int i=0;i<n;i++){
     maxval = max(maxval , arr[i]);
    }

    vector<int> cntArr(maxval+1 , 0);


    for(int i=0;i<n;i++){
        cntArr[arr[i]]++;
    }

    for(int i=1 ; i<=maxval ; i++){
        cntArr[i] += cntArr[i-1];
    }
     
    vector<int> ans(n);
    for(int i=n-1 ; i>=0 ; i--){
       ans[cntArr[arr[i]] - 1]  =  arr[i];
       cntArr[arr[i]]--;
    }

    return ans;
}
int main()
{
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    vector<int> sortedArr = countsort(arr);
    for(int i=0;i<sortedArr.size();i++){
        cout<<sortedArr[i]<<" ";
    }
    return 0;
}