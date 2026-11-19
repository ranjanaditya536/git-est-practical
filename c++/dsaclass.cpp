//wap to program to implement stack using queue

// #include<iostream>
// #define MAX 100
// using namespace std;
// int queue[MAX];
// int front=-1;
// int rear=-1;
// void enqueue(int x){
//     if(rear==MAX-1){
//         cout<<"Queue is full"<<endl;
//         return;
//     }
//     else{
//         rear++;
//         queue[rear]=x;
//         if(front==-1){
//             front=0;
//         }
//     }
// }
// void dequeue(){
//     if(front==-1){
//         cout<<"Queue is empty"<<endl;
//         return;
//     }
//     else{
//         front++;
//         if(front>rear){
//             front=-1;
//             rear=-1;
//         }
//     }
// }
// void display(){
//     if(front==-1){
//         cout<<"Queue is empty"<<endl;
//         return;
//     }
//     else{
//         for(int i=front;i<=rear;i++){
//             cout<<queue[i]<<" ";
//         }
//         cout<<endl;
//     }
// }
// int main(){
//     int choice,x;
//     while(1){
//         cout<<"1. Enqueue"<<endl;
//         cout<<"2. Dequeue"<<endl;
//         cout<<"3. Display"<<endl;
//         cout<<"4. Exit"<<endl;
//         cout<<"Enter your choice: ";
//         cin>>choice;
//         switch(choice){
//             case 1:
//                 cout<<"Enter the element to be enqueued: ";
//                 cin>>x;
//                 enqueue(x);
//                 break;
//             case 2:
//                 dequeue();
//                 break;
//             case 3:
//                 display();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 cout<<"Invalid choice"<<endl;
//         }
//     }
//     return 0;
// }


//wap to enqueue and deque using linked list

#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Queue{
    private:
    Node* front;
    Node* rear;
    public:
    Queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int x){
        Node* temp=new Node();
        temp->data=x;
        temp->next=NULL;
        if(front==NULL){
            front=temp;
            rear=temp;
        }
        else{
            rear->next=temp;
            rear=temp;
        }
    }
    void dequeue(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            Node* temp=front;
            front=front->next;
            delete temp;
        }
    }
    void display(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
            return;
        }
        else{
            Node* temp=front;
            while(temp!=NULL){
                cout<<temp->data<<" ";
                temp=temp->next;
            }
            cout<<endl;
        }
    }
};
int main(){
    Queue q;
    int choice,x;
    while(1){
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Enter the element to be enqueued: ";
                cin>>x;
                q.enqueue(x);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.display();
                break;
            case 4:
                exit(0);
            default:
                cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}

// wap to 


