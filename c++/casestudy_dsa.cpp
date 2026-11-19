// /*
//  * ============================================================
//  *        AIRPORT BAGGAGE TRACKING SYSTEM
//  *        Data Structure Used: Singly Linked List
//  *        Features: Check-in, Update Status, Track, Delete
//  * ============================================================
//  */

// #include <iostream>
// #include <string>
// #include <iomanip>
// using namespace std;

// // ─────────────────────────────────────────────
// //  ENUM: Represents all possible baggage states
// // ─────────────────────────────────────────────
// enum BaggageStatus {
//     CHECKED_IN,       // Baggage registered at counter
//     SECURITY_SCAN,    // Going through security screening
//     LOADED,           // Loaded onto the aircraft
//     IN_TRANSIT,       // Aircraft is in the air
//     ARRIVED,          // Landed at destination airport
//     ON_BELT,          // Placed on baggage carousel belt
//     DELIVERED,        // Collected by passenger
//     LOST              // Baggage cannot be located
// };

// // Helper function: converts BaggageStatus enum to a readable string
// string statusToString(BaggageStatus status) {
//     switch (status) {
//         case CHECKED_IN:    return "Checked In";
//         case SECURITY_SCAN: return "Security Scan";
//         case LOADED:        return "Loaded onto Aircraft";
//         case IN_TRANSIT:    return "In Transit";
//         case ARRIVED:       return "Arrived at Destination";
//         case ON_BELT:       return "On Baggage Belt";
//         case DELIVERED:     return "Delivered to Passenger";
//         case LOST:          return "Lost / Not Found";
//         default:            return "Unknown";
//     }
// }

// // ─────────────────────────────────────────────
// //  NODE STRUCTURE: Each node = one baggage item
// // ─────────────────────────────────────────────
// struct BaggageNode {
//     int           baggageID;        // Unique ID assigned at check-in
//     string        passengerName;    // Owner of the baggage
//     string        flightNumber;     // Associated flight
//     string        origin;           // Departure airport code (e.g., DEL)
//     string        destination;      // Arrival airport code  (e.g., DXB)
//     float         weightKg;         // Weight of the bag in kilograms
//     BaggageStatus status;           // Current status in the pipeline
//     string        lastUpdated;      // Timestamp of last status change
//     BaggageNode*  next;             // Pointer to next node in linked list

//     // Constructor: initializes a new baggage node with given values
//     BaggageNode(int id, string name, string flight,
//                 string orig, string dest, float weight, string time)
//         : baggageID(id), passengerName(name), flightNumber(flight),
//           origin(orig), destination(dest), weightKg(weight),
//           status(CHECKED_IN), lastUpdated(time), next(nullptr) {}
// };

// // ─────────────────────────────────────────────
// //  LINKED LIST CLASS: Manages all baggage nodes
// // ─────────────────────────────────────────────
// class BaggageTracker {
// private:
//     BaggageNode* head;    // Pointer to the first node (front of the list)
//     int          count;   // Total number of baggage records in the list

// public:
//     // Constructor: initializes an empty linked list
//     BaggageTracker() : head(nullptr), count(0) {}

//     // ── Destructor: frees all allocated memory on program exit ──
//     ~BaggageTracker() {
//         BaggageNode* current = head;
//         while (current != nullptr) {           // Traverse entire list
//             BaggageNode* temp = current;       // Hold reference to current node
//             current = current->next;           // Move to next node
//             delete temp;                       // Free current node's memory
//         }
//     }

//     // ════════════════════════════════════════════
//     //  INSERT: Add new baggage at the END of list
//     // ════════════════════════════════════════════
//     void checkInBaggage(int id, string name, string flight,
//                         string orig, string dest, float weight, string time) {

//         // Check if baggage ID already exists to avoid duplicates
//         if (findBaggage(id) != nullptr) {
//             cout << "\n  [!] Baggage ID " << id << " already exists in system.\n";
//             return;
//         }

//         // Dynamically allocate memory for the new baggage node
//         BaggageNode* newNode = new BaggageNode(id, name, flight, orig, dest, weight, time);

//         if (head == nullptr) {
//             // List is empty — new node becomes the head
//             head = newNode;
//         } else {
//             // Traverse to the last node in the list
//             BaggageNode* temp = head;
//             while (temp->next != nullptr) {    // Keep moving until last node
//                 temp = temp->next;
//             }
//             temp->next = newNode;              // Attach new node at the end
//         }

//         count++;                               // Increment total baggage count
//         cout << "\n  [✓] Baggage #" << id << " checked in successfully for "
//              << name << " on flight " << flight << ".\n";
//     }

//     // ════════════════════════════════════════════
//     //  SEARCH: Find a node by baggage ID
//     //  Returns pointer to node, or nullptr if not found
//     // ════════════════════════════════════════════
//     BaggageNode* findBaggage(int id) {
//         BaggageNode* current = head;           // Start from the head
//         while (current != nullptr) {           // Traverse until end of list
//             if (current->baggageID == id)      // Match found
//                 return current;
//             current = current->next;           // Move to next node
//         }
//         return nullptr;                        // Not found
//     }

//     // ════════════════════════════════════════════
//     //  UPDATE: Change the status of a baggage item
//     // ════════════════════════════════════════════
//     void updateStatus(int id, BaggageStatus newStatus, string time) {
//         BaggageNode* node = findBaggage(id);   // Search for the baggage

//         if (node == nullptr) {
//             cout << "\n  [!] Baggage ID " << id << " not found.\n";
//             return;
//         }

//         BaggageStatus oldStatus = node->status;    // Save previous status
//         node->status      = newStatus;             // Update to new status
//         node->lastUpdated = time;                  // Update timestamp

//         cout << "\n  [✓] Baggage #" << id << " status updated:\n";
//         cout << "      " << statusToString(oldStatus)
//              << "  →  " << statusToString(newStatus) << "\n";
//     }

//     // ════════════════════════════════════════════
//     //  TRACK: Display full details of one baggage
//     // ════════════════════════════════════════════
//     void trackBaggage(int id) {
//         BaggageNode* node = findBaggage(id);   // Locate the baggage node

//         if (node == nullptr) {
//             cout << "\n  [!] No record found for Baggage ID: " << id << "\n";
//             return;
//         }

//         // Print a formatted detail card for the baggage
//         cout << "\n  ┌──────────────────────────────────────────┐\n";
//         cout << "  │         BAGGAGE TRACKING DETAILS         │\n";
//         cout << "  ├──────────────────────────────────────────┤\n";
//         cout << "  │ Baggage ID   : " << left << setw(27) << node->baggageID   << "│\n";
//         cout << "  │ Passenger    : " << left << setw(27) << node->passengerName << "│\n";
//         cout << "  │ Flight       : " << left << setw(27) << node->flightNumber << "│\n";
//         cout << "  │ Route        : " << left << setw(27) << (node->origin + " → " + node->destination) << "│\n";
//         cout << "  │ Weight       : " << left << setw(24) << node->weightKg << "kg │\n";
//         cout << "  │ Status       : " << left << setw(27) << statusToString(node->status) << "│\n";
//         cout << "  │ Last Updated : " << left << setw(27) << node->lastUpdated << "│\n";
//         cout << "  └──────────────────────────────────────────┘\n";
//     }

//     // ════════════════════════════════════════════
//     //  DELETE: Remove a delivered/lost baggage
//     //  from the linked list and free its memory
//     // ════════════════════════════════════════════
//     void removeBaggage(int id) {
//         if (head == nullptr) {
//             cout << "\n  [!] System is empty. Nothing to remove.\n";
//             return;
//         }

//         // Special case: the node to delete is the head
//         if (head->baggageID == id) {
//             BaggageNode* temp = head;          // Save head pointer
//             head = head->next;                 // Move head to next node
//             delete temp;                       // Free deleted node
//             count--;
//             cout << "\n  [✓] Baggage #" << id << " removed from system.\n";
//             return;
//         }

//         // General case: traverse to find the node just before the target
//         BaggageNode* prev    = head;
//         BaggageNode* current = head->next;

//         while (current != nullptr) {
//             if (current->baggageID == id) {    // Found the node to delete
//                 prev->next = current->next;    // Bypass the target node
//                 delete current;                // Free the target node
//                 count--;
//                 cout << "\n  [✓] Baggage #" << id << " removed from system.\n";
//                 return;
//             }
//             prev    = current;                 // Advance previous pointer
//             current = current->next;           // Advance current pointer
//         }

//         cout << "\n  [!] Baggage ID " << id << " not found for removal.\n";
//     }

//     // ════════════════════════════════════════════
//     //  DISPLAY ALL: Print summary of every baggage
//     //  in the linked list from head to tail
//     // ════════════════════════════════════════════
//     void displayAll() {
//         if (head == nullptr) {
//             cout << "\n  [!] No baggage records in the system.\n";
//             return;
//         }

//         cout << "\n  ╔══════════════════════════════════════════════════════════════════════╗\n";
//         cout << "  ║                   ALL BAGGAGE RECORDS  [Total: " 
//              << setw(3) << count << "]                 ║\n";
//         cout << "  ╠══════╦══════════════════╦════════╦══════════╦═══════════════════════╣\n";
//         cout << "  ║  ID  ║ Passenger        ║ Flight ║  Route   ║ Status                ║\n";
//         cout << "  ╠══════╬══════════════════╬════════╬══════════╬═══════════════════════╣\n";

//         BaggageNode* current = head;           // Start from head
//         while (current != nullptr) {           // Traverse until end
//             cout << "  ║ " << setw(4) << left << current->baggageID
//                  << " ║ " << setw(16) << left << current->passengerName.substr(0,16)
//                  << " ║ " << setw(6)  << left << current->flightNumber
//                  << " ║ " << setw(3)  << left << current->origin << " → "
//                  << setw(3)  << left << current->destination
//                  << " ║ " << setw(21) << left << statusToString(current->status) << " ║\n";
//             current = current->next;           // Move to next node
//         }

//         cout << "  ╚══════╩══════════════════╩════════╩══════════╩═══════════════════════╝\n";
//     }

//     // ════════════════════════════════════════════
//     //  FILTER: Show all baggage for a given flight
//     // ════════════════════════════════════════════
//     void displayByFlight(string flightNum) {
//         BaggageNode* current = head;           // Start from head
//         bool found = false;

//         cout << "\n  Baggage records for Flight " << flightNum << ":\n";
//         cout << "  " << string(50, '-') << "\n";

//         while (current != nullptr) {
//             if (current->flightNumber == flightNum) {  // Filter by flight number
//                 cout << "  ID: " << current->baggageID
//                      << " | " << current->passengerName
//                      << " | " << current->weightKg << " kg"
//                      << " | " << statusToString(current->status) << "\n";
//                 found = true;
//             }
//             current = current->next;           // Move to next node
//         }

//         if (!found)
//             cout << "  No records found for flight " << flightNum << ".\n";
//     }

//     // Returns total number of baggage items currently tracked
//     int getCount() { return count; }
// };

// // ─────────────────────────────────────────────
// //  MENU: Displays interactive console menu
// // ─────────────────────────────────────────────
// void displayMenu() {
//     cout << "\n  ╔══════════════════════════════════════╗\n";
//     cout << "  ║    AIRPORT BAGGAGE TRACKING SYSTEM   ║\n";
//     cout << "  ╠══════════════════════════════════════╣\n";
//     cout << "  ║  1. Check-In New Baggage             ║\n";
//     cout << "  ║  2. Update Baggage Status            ║\n";
//     cout << "  ║  3. Track a Baggage                  ║\n";
//     cout << "  ║  4. Display All Baggage              ║\n";
//     cout << "  ║  5. Search by Flight Number          ║\n";
//     cout << "  ║  6. Remove Baggage Record            ║\n";
//     cout << "  ║  0. Exit                             ║\n";
//     cout << "  ╚══════════════════════════════════════╝\n";
//     cout << "  Enter choice: ";
// }

// // ─────────────────────────────────────────────
// //  MAIN: Entry point — drives the menu loop
// // ─────────────────────────────────────────────
// int main() {
//     BaggageTracker tracker;    // Create the linked list-based tracker
//     int choice;

//     // Pre-load some sample baggage records for demonstration
//     tracker.checkInBaggage(1001, "Arjun Sharma",  "AI202", "DEL", "DXB", 23.5, "08:00");
//     tracker.checkInBaggage(1002, "Priya Mehta",   "EK506", "BOM", "LHR", 18.0, "08:15");
//     tracker.checkInBaggage(1003, "Rohan Verma",   "AI202", "DEL", "DXB", 30.2, "08:30");
//     tracker.checkInBaggage(1004, "Sneha Kapoor",  "UK801", "HYD", "SIN", 15.7, "08:45");

//     // Simulate some status progressions
//     tracker.updateStatus(1001, SECURITY_SCAN, "08:20");
//     tracker.updateStatus(1001, LOADED,        "09:00");
//     tracker.updateStatus(1002, SECURITY_SCAN, "08:35");

//     // ── Main menu loop ──
//     do {
//         displayMenu();                         // Show options to user
//         cin >> choice;                         // Read user's choice

//         if (choice == 1) {
//             // ── Collect check-in details from user ──
//             int    id;    string name, flight, orig, dest, time;    float wt;
//             cout << "\n  Enter Baggage ID     : "; cin >> id;
//             cin.ignore();
//             cout << "  Passenger Name       : "; getline(cin, name);
//             cout << "  Flight Number        : "; cin >> flight;
//             cout << "  Origin (e.g. DEL)    : "; cin >> orig;
//             cout << "  Destination (e.g. DXB): "; cin >> dest;
//             cout << "  Weight (kg)          : "; cin >> wt;
//             cout << "  Timestamp (HH:MM)    : "; cin >> time;
//             tracker.checkInBaggage(id, name, flight, orig, dest, wt, time);

//         } else if (choice == 2) {
//             // ── Update status: show options then apply ──
//             int id, statusCode;
//             cout << "\n  Enter Baggage ID  : "; cin >> id;
//             cout << "  New Status\n";
//             cout << "   0-Checked In  1-Security Scan  2-Loaded\n";
//             cout << "   3-In Transit  4-Arrived  5-On Belt\n";
//             cout << "   6-Delivered   7-Lost\n";
//             cout << "  Enter status code : "; cin >> statusCode;
//             string time;
//             cout << "  Timestamp (HH:MM) : "; cin >> time;
//             tracker.updateStatus(id, static_cast<BaggageStatus>(statusCode), time);

//         } else if (choice == 3) {
//             // ── Track single baggage by ID ──
//             int id;
//             cout << "\n  Enter Baggage ID: "; cin >> id;
//             tracker.trackBaggage(id);

//         } else if (choice == 4) {
//             // ── Display every record in the linked list ──
//             tracker.displayAll();

//         } else if (choice == 5) {
//             // ── Filter records by flight number ──
//             string flight;
//             cout << "\n  Enter Flight Number: "; cin >> flight;
//             tracker.displayByFlight(flight);

//         } else if (choice == 6) {
//             // ── Remove a baggage node from the linked list ──
//             int id;
//             cout << "\n  Enter Baggage ID to remove: "; cin >> id;
//             tracker.removeBaggage(id);

//         } else if (choice != 0) {
//             cout << "\n  [!] Invalid choice. Please try again.\n";
//         }

//     } while (choice != 0);               // Exit loop when user enters 0

//     cout << "\n  [✓] System shutdown. Goodbye!\n\n";
//     return 0;                            // Program ends; destructor frees all nodes
// }




#include<iostream>          // Library for input-output (cout, cin)
using namespace std;       // Avoid writing std:: again and again

// Node structure (represents one baggage)
struct Node {
    int id;                // Stores baggage ID
    string name;           // Stores passenger name
    string status;         // Stores baggage status
    Node* next;            // Pointer to next node
};

class Baggage {
    Node* head;            // Pointer to first node of linked list

public:
    // Constructor (runs automatically when object is created)
    Baggage() {
        head = NULL;       // Initially list is empty
    }

    // Function to add new baggage
    void checkIn(int id, string name) {
        Node* temp = new Node();   // Create new node in heap memory
        temp->id = id;             // Assign ID
        temp->name = name;         // Assign passenger name
        temp->status = "Checked-In"; // Default status
        temp->next = NULL;         // Last node points to NULL

        // If list is empty
        if(head == NULL)
            head = temp;           // New node becomes first node
        else {
            Node* t = head;        // Start from first node
            while(t->next != NULL) // Traverse till last node
                t = t->next;
            t->next = temp;        // Attach new node at end
        }
    }

    // Function to search baggage by ID
    Node* search(int id) {
        Node* t = head;            // Start from first node
        while(t != NULL) {         // Traverse entire list
            if(t->id == id)        // If ID matches
                return t;          // Return that node
            t = t->next;           // Move to next node
        }
        return NULL;               // If not found
    }

    // Function to update baggage status
    void update(int id, string st) {
        Node* t = search(id);      // Find node using search function
        if(t == NULL)              // If not found
            cout<<"Not Found\n";
        else
            t->status = st;        // Update status
    }

    // Function to display all baggage
    void display() {
        Node* t = head;            // Start from first node
        while(t != NULL) {         // Traverse list
            cout<<t->id<<" "<<t->name<<" "<<t->status<<endl; // Print data
            t = t->next;           // Move to next node
        }
    }
};

int main() {
    Baggage b;                    // Create object of class

    b.checkIn(1,"Aditya");        // Add first baggage
    b.checkIn(2,"Rohan");         // Add second baggage

    b.update(1,"Loaded");         // Update status of ID 1

    b.display();                  // Display all records

    return 0;                     // End program
}