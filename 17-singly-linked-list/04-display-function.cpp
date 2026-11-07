#include <iostream>
using namespace std;
class node{ // linked list node
    public: 
    int val;
    node* next;

    // cunstrocter
    node(int val){
        this->val=val;
        this -> next = NULL;
        // (*this).next =NULL;
    }
};

// void display(node* head){
//     node* temp = head;
//     while (temp!=NULL){
//         cout<<temp->val<<" ";
//     temp =  temp -> next;

//     }
// }


void display(node* head){
    while (head!=NULL){
        cout<<head->val<<" ";
    head =  head -> next;

    }
}

int main(){
    node* a = new node(10); // in node* a it will store address of new node(10)
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);

    a->next =b;
    b->next =c;
    c->next =d;

    display(a);

// node* temp = a;
//     for (temp = a; temp!=NULL; temp = temp->next){
//         cout<<temp->val;
//     }

    return 0;
}