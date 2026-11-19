#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    long d;
      char c;
      float e;
    double b;
    
    cin>>a>>d>>c>>e>>b;
    
    cout<<a<<endl;
    cout<<d<<endl;
    cout<<c<<endl;
    cout<<fixed<<setprecision(3)<<e<<endl;
    
    cout<<fixed<<setprecision(9)<<b<<endl;
}
