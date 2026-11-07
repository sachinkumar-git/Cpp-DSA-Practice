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

// reverse recursive display
void revdisplay(node* head){
 if (head==NULL) return; // base case
 revdisplay(head->next); // call 
 cout<<head->val<<" "; // kaaam
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

    revdisplay(a);

 

    return 0;
}