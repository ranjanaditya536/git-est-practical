//even sum  -  odd sum    ----->>>> index based
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,result;
    cout<<"Enter number of elements "<<endl;
    cin>>n;

    vector<int>  v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int evensum =0;
    int oddsum=0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            evensum=evensum+v[i];

        }
        else {
            oddsum+=v[i];
        }

        result=evensum-oddsum;


    }

cout<<"The result is: "<<result<<endl;
    return 0;
}