// /*
//  * ============================================================
//  *        AIRPORT BAGGAGE TRACKING SYSTEM
//  *        Data Structure Used: Singly Linked List
//  *        Features: Check-in, Search, Update, Display
//  * ============================================================
//  */

#include<iostream>
using namespace std;

// Node structure
struct Node {
    int id;
    string name;
    string status;
    Node* next;
    
};

class Baggage {
    Node* head;

public:
    Baggage() {
        head = NULL;
    }

    // Add baggage
    void checkIn(int id, string name) {
        Node* temp = new Node();
        temp->id = id;
        temp->name = name;
        temp->status = "Checked-In";
        temp->next = NULL;

        if(head == NULL)
            head = temp;
        else {
            Node* t = head;
            while(t->next != NULL)
                t = t->next;
            t->next = temp;
        }
    }

    // Search baggage
    Node* search(int id) {
        Node* t = head;
        while(t != NULL) {
            if(t->id == id)
                return t;
            t = t->next;
        }
        return NULL;
    }

    // Update status
    void update(int id, string st) {
        Node* t = search(id);
        if(t == NULL)
            cout<<"Not Found\n";
        else
            t->status = st;
    }

    // Display all
    void display() {
        Node* t = head;
        while(t != NULL) {
            cout<<t->id<<" "<<t->name<<" "<<t->status<<endl;
            t = t->next;
        }
    }
};

int main() {
    Baggage b;

    b.checkIn(1,"Andrew");
    b.checkIn(2,"Raj");

    b.update(1,"Loaded");

    b.display();

    return 0;
}