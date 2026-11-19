#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void traverse(Node* head) {
    Node* ptr = head;
    
    if (head == NULL) {
        cout << "Linked list is empty";
        return;
    }
    
    cout << "Linked List: ";
    while (ptr != NULL) {
        cout << ptr->data << " -> ";
        ptr = ptr->next;
    }
    cout << "NULL";
}

int main() {
    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    
    // Allocating memory using new (C++ way)
    head = new Node();
    second = new Node();
    third = new Node();
    
    head->data = 10;
    head->next = second;
    
    second->data = 20;
    second->next = third;
    
    third->data = 30;
    third->next = NULL;
    
    traverse(head);
    
    return 0;
}


// // #include <iostream>
// // using namespace std;
// // class Node{
// //     public:
// //     int val;
// //     Node* next;

// //     Node(int data){
// //         val=data;
// //         next=NULL;
// //     }
// // };
// // void insertAtHead(Node* &head,int val){
// //     Node* new_Node=new Node(val);
// //     new_Node->next=head;
// //     head=new_Node;
// // }

// // void display(Node* head){
// //     Node* temp=head;
// //     while(temp!=NULL){
// //         cout<<temp->val<<"->";
// //         temp=temp->next;
// //     }
// //     cout<<"NULL"<<endl;
// // }

// // int main()
// // {
// //     Node* head=NULL;
// //     insertAtHead(head,10);
// //     display(head);
// //     insertAtHead(head,20);
// //     display(head);
// //     insertAtHead(head,30);
// //     display(head);
// //     return 0;
// // }

// //wap to insert a node at the beginning of a linked list and insering a node at the 
// //end of a linked list and inserting a node at a given position in a linked list
// //and finally display the linked list

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
// void insertAtHead(Node* &head ,int val){
//     Node*new_node=new Node(val);
//     new_node->next=head;
// }
// void insertAtEnd(Node* &head ,int val){
//     Node* new_node=new Node(val);
//     if(head==NULL){
//         head=new_node;
//         return;
//     }
//     Node* temp=head;
//     while(temp->next!=NULL){
//         temp=temp->next;
//     }
//     temp->next=new_node;
// }
// void insertAtPosition(Node* &head ,int val,int pos){
//     Node* new_node=new Node(val);
//     if(pos==1){
//         new_node->next=head;
//         head=new_node;
//         return;
//     }
//     Node* temp=head;
//     for(int i=1;i<pos-1 && temp!=NULL;i++){
//         temp=temp->next;
//     }
//     if(temp==NULL){
//         cout<<"Position out of bounds"<<endl;
//         return;
//     }
//     new_node->next=temp->next;
//     temp->next=new_node;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main()
// {
//     Node* head=NULL;
//     insertAtHead(head,10);
//     display(head);
//     insertAtEnd(head,20);
//     display(head);
//     insertAtPosition(head,15,2);
//     display(head);
//     return 0;
// }

//   wap to delete a node at the beginning of a linked list using struct
// #include <iostream>
// using namespace std;
// struct Node{
//     int val;
//     Node* next;
// };
// void deleteAtHead(Node* &head){
//     if(head==NULL){
//         cout<<"List is empty"<<endl;
//         return;
//     }
//     Node* temp=head;
//     head=head->next;
//     delete temp;
// }
// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//         cout<<temp->val<<"->";
//         temp=temp->next;
//     }
//     cout<<"NULL"<<endl;
// }
// int main()
// {
//     Node* head=NULL;
//     head=new Node();
//     head->val=10;
//     head->next=NULL;
//     display(head);
//     deleteAtHead(head);
//     display(head);
//     return 0;


  