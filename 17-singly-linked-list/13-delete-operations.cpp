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

    // insert at beginning
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

    // delete at beginning
    void deleteAtHead() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        head = head->next;
        size--;
        if (size == 0) {
            tail = NULL;
        }
    }

    // delete at end
    void deleteAtTail() {
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }

        if (size == 1) {
            delete head; // delete the only node
            head = tail = NULL;
        } else {
            node* temp = head;
            while (temp->next != tail) {
                temp = temp->next;
            }
            temp->next = NULL; // remove the last node
            delete tail;
            tail = temp;
        }
        size--;
    }
    // delete at index
    void deleteAtIdx(int idx){
        if (size == 0) {
            cout << "List is empty" << endl;
            return;
        }
        else if (idx<0 || idx>=size){
            cout<<"invalid index";
            return;
        }
        else if(idx==0) return deleteAtHead();
        else if (idx==size-1) return deleteAtTail();
        else {
            node *temp = head;
            for (int i = 1; i < idx; i++) {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
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
    ll.deleteAtHead(); // {50->10->20->80->30->40->NULL}
    ll.display();
    ll.deleteAtTail(); // {50->10->20->80->30->NULL}
    ll.display();
    ll.deleteAtIdx(3);
    ll.display();

    cout << "Size: " << ll.size << endl; // Prints the size of the list
}
