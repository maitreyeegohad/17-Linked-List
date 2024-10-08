#include <iostream>
using namespace std;

class Link {
public:
    int data; 
    Link* next;
    
    Link(int num) {
        data = num;
        next = NULL;
    }
};

// Function to insert a node at the end of the linked list
void insert_end(Link* &head, int data) {
    Link* new_node = new Link(data);
    if (head == NULL) {
        head = new_node;  // If the list is empty, set head to the new node
    } else {
        Link* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;  // Traverse to the last node
        }
        temp->next = new_node;  // Link the new node to the end of the list
    }
}

// Function to display the linked list
void disp(Link* head) {
    Link* temp = head;
    while (temp != NULL) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Link* head = NULL;

    // Insert nodes at the end
    insert_end(head, 30);
    disp(head);  // Output: 30->NULL

    insert_end(head, 32);
    disp(head);  // Output: 30->32->NULL

    insert_end(head, 35);
    disp(head);  // Output: 30->32->35->NULL

    return 0;
}

/*
Output:
30->NULL
30->32->NULL
30->32->35->NULL
*/
