#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int counter=0;
    int occurance=-1;
    int x;
    cout<<"Enter the element to search for:"<<endl;
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(v[i]==x){
            occurance=i;
            counter++ ;
           
        }
    }
            cout<<"Element found at last position index "<<occurance<<endl;
            cout<<"Element is found "<<counter<<" times in the vector"<<endl;
            return 0;
    
}