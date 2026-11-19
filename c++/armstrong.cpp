#include <iostream>
using namespace std;

int main()
{
    int num , org,sum=0,temp,count=0,lastdigit;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    org=num;
    temp=num;
    while(temp>0){
        temp/=10;
        count++;
        
    }
    temp=num;
    while(temp>0){
        lastdigit=temp%10;
        int power=1;
        for (int i=0;i<count;i++){
            power=power*lastdigit;
        }
            sum+=power;
            temp/=10;
        
    }
    if(sum==org){
        cout<<"It is an Armstrong number."<<endl;
    }
    else{
        cout<<"It is not an Armstrong number."<<endl;
    }
    return 0;
}