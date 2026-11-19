// // wap to using linked list to insert a node at the beginning of the linked list ,
// // insert at some position and insert at the end of the linked list and finally display the linked list
// #include <iostream>
// using namespace std;
// class Node{
//     public:
//     int val;
//     Node* next;
//     Node(int data){
//         val=data;
//         next=NULL;
//     }
// };
// void insertAtHead(Node* &head,int val){
//     Node* new_Node=new Node(val);
//     new_Node->next=head;
//     head=new_Node;
// }
// void insertAtposition(Node* &head,int val,int pos){
//     Node* new_Node=new Node(val);
//     if(pos==1){
//         new_Node->next=head;
//         head=new_Node;
//         return;
//     }
//     Node* temp=head;
//     for(int i=1;i<pos-1;i++){
//         temp=temp->next;
//     }
//     new_Node->next=temp->next;
//     temp->next=new_Node;
// }
// void insertAtEnd(Node* &head,int val){
//     Node* new_Node=new Node(val);
//     if(head==NULL){
//         head=new_Node;
//         return;
//     }
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_Node;
// }

// int main()
// {
//     Node* head=NULL;
//     insertAtHead(head,10);
//     insertAtHead(head,20);
//     insertAtHead(head,30);
//     insertAtEnd(head,40);
//     insertAtposition(head,25,3);
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }

//     return 0;
// }



// wap to deletion in ll at beginning ,at end and at some position and finally display the linked list
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int data){
        val=data;
        next=NULL;
    }
    void deleteAtHead(Node* &head){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        Node* temp=head;
        head=head->next;
        delete temp;
    }
    void deleteAtEnd(Node* &head){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }
        Node* temp=head;
        while(temp->next->next!=NULL){
            temp=temp->next;
        }
        delete temp->next;
        temp->next=NULL;
    }
    void deleteAtPosition(Node* &head,int pos){
        if(head==NULL){
            cout<<"List is empty"<<endl;
            return;
        }
        if(pos==1){
            Node* temp=head;
            head=head->next;
            delete temp;
            return;
        }
        Node* temp=head;
        for(int i=1;i<pos-1;i++){
            temp=temp->next;
        }
        Node* todelete=temp->next;
        temp->next=temp->next->next;
        delete todelete;
}
};
int main()
{
    Node* head=NULL;
    head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->deleteAtHead(head);
    head->deleteAtEnd(head);
    head->deleteAtPosition(head,2);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }

    return 0;
}
