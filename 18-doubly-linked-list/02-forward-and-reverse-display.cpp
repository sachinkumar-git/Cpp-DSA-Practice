#include <iostream>
using namespace std;
class node {
    public:
    int val;
    node* next;
    node* prev; // extra for DLL
    node(int val){
        this->val= val;
        this->next = NULL;
        this->prev = NULL; // extra for DLL
    }
};

// recursively display
void Recdisplay(node* head){ // O(n) space
if (head==NULL) return;
cout<<head->val<<" ";
Recdisplay(head->next);
}

// reverse recursively display

void RecRevdisplay(node* head){ // O(n) space
    if (head==NULL) return;
    RecRevdisplay(head->next);
    cout<<head->val<<" ";
    }
 
// reverse normal using DLL 
void RevDLLdisplay(node* tail ){
    while(tail!=NULL){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    // 10 20 30 40 50
    node* a = new node(10);
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;

    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;

    Recdisplay(a);
    cout<<endl;
    RecRevdisplay(a);
    cout<<endl;
    RevDLLdisplay(e);

    
    return 0;
}