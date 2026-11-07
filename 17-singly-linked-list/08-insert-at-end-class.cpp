#include <iostream>
using namespace std;
class node
{ // user defined data type
public:
    int val;
    node *next;
    node(int val)
    {
        this->val = val;
        this->next = NULL;
        // (*this).next =NULL;
    }
};
class LinkedList
{ // user defined data structure
public:
    node *head;
    node *tail;
    int size;
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd(int val)
    {
        node *temp = new node(val);
        if (size == 0)
            head = tail = temp;
        else
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
        void display()
        {
            node *temp = head;
            while (temp != NULL)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    };

    int main()
    {
        LinkedList ll;      // {} empty linked list
        ll.insertAtEnd(10); // {10}
        ll.display();
        ll.insertAtEnd(20); // {10->20->NULL}
        ll.insertAtEnd(30);
        ll.insertAtEnd(40);
        ll.display(); 
        cout<<ll.size;
    }