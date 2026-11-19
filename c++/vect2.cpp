#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(6);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    int x;
    cout<<"Enter the element to which greater elements are to be printed:"<<endl;
    cin>>x;

    for(int i=0;i<v.size();i++){
        if(v[i]>x){
            cout<<v[i]<<" ";
        }
    }
    return 0;
}