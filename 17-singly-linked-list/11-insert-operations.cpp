#include <iostream>
using namespace std;

class node {
public:
    int val;
    node *next;
    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList {
public:
    node *head;
    node *tail;
    int size;

    LinkedList() {
        head = tail = NULL;
        size = 0;
    }

// insert at end
    void insertAtTail(int val) {
        node *temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

// insert at begning
    void insertAtHead(int val) {
        node *temp = new node(val);
        if (size == 0) {
            head = tail = temp;
        } else {
            temp->next = head;
            head = temp;
        }
        size++;
    }

// insert at middle
    void insertAtIdx(int idx, int val) {
        if (idx < 0 || idx > size) {
            cout << "Invalid Index" << endl;
            return;
        }
        
        if (idx == 0) {
            insertAtHead(val);
        } else if (idx == size) {
            insertAtTail(val);
        } else {
            node *t = new node(val);
            node *temp = head;
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

// display the linked list  
    void display() {
        node *temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;      // {} empty linked list
    ll.insertAtTail(10); // {10->NULL}
    ll.display();
    ll.insertAtTail(20); // {10->20->NULL}
    ll.display();
    ll.insertAtTail(30); // {10->20->30->NULL}
    ll.insertAtTail(40); // {10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(50); // {50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtHead(24); // {24->50->10->20->30->40->NULL}
    ll.display();
    ll.insertAtIdx(4, 80); // {24->50->10->20->80->30->40->NULL}
    ll.display();
    cout << "Size: " << ll.size << endl; // Prints the size of the list
}
