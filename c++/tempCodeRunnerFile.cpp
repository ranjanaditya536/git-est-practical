#include<iostream>
using namespace std;
#define MAX 100
class Stack{
    int top;
    int arr[MAX];
    public:
    Stack(){
        top=-1;
    }
    void push(int x){
        if(top==MAX-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        arr[++top]=x;
    }
    int pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        return arr[top--];
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout<<"Popped element is:"<<s.pop()<<endl;
    cout<<"Popped element is:"<<s.pop()<<endl;
    cout<<"Popped element is:"<<s.pop()<<endl;
    cout<<"Popped element is:"<<s.pop()<<endl;
    return 0;
}