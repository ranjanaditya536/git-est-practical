// wap to implement stack using array and class in c++
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


//wap to implement stack using linked list and class in c++

// #include <iostream>
// using namespace std;

// class Node {
// public:
//     int data;
//     Node* next;
//     Node(int x) {
//         data = x;
//         next = NULL;
//     }
// };

// class Stack {
// private:
//     Node* top;
// public:
//     Stack() {
//         top = NULL;
//     }
//     void push(int x) {
//         Node* temp = new Node(x);
//         temp->next = top;
//         top = temp;
//     }
//     int pop() {
//         if (top == NULL) {
//             cout << "Stack underflow" << endl;
//             return -1;
//         }
//         Node* temp = top;
//         top = top->next;
//         int x = temp->data;
//         delete temp;
//         return x;
//     }
//     bool isEmpty() {
//         return top == NULL;
//     }
// };

// int main() {
//     Stack s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout << "Popped element is: " << s.pop() << endl;
//     cout << "Popped element is: " << s.pop() << endl;
//     cout << "Popped element is: " << s.pop() << endl;
//     cout << "Popped element is: " << s.pop() << endl;
//     return 0;
// }