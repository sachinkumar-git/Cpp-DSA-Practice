#include <iostream>
using namespace std;
class node{ // linked list node
    public: 
    int val;
    node* next;

    // parameterized cunstrocter
    node(int val){
        this->val=val;
        this -> next = NULL;
        // (*this).next =NULL;
    }
};

// recursively displaying
void display(node* head){
 if (head==NULL) return;
 cout<<head->val<<" ";
 display(head->next);
}
void insertAtEnd(node* head, int val){
    node* t = new node(val);
    while (head->next!=NULL) head = head->next;
    head -> next = t;
}


int main(){
    node* a = new node(10); // in node* a it will store address of new node(10)
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node (50);

    a->next =b;
    b->next =c;
    c->next =d;
    d->next = e;
    display(a);
    insertAtEnd(a,80);
    display(a);


 

    return 0;
}