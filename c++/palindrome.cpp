#include <iostream>
using namespace std;

int main()
{
    int num, original,reversed=0,temp,lastdigit;
    cout<<"Enter a number:"<<endl;
    cin>>num;
    original=num;

    temp=num;
    while(temp>0){
    lastdigit=temp%10;
    reversed=reversed*10+lastdigit;
    temp/=10;
    }
    if
        (original==reversed){
            cout<<"palindrome";
    }
    else{
        cout<<"NOt an Palindrome";
    }


    return 0;
}