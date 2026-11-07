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
void display(node* head){
    while (head!=NULL){
        cout<<head->val<<" ";
    head =  head -> next;

    }
    cout<<endl;
}
// for coding test  
node* middlenode(node* head){
    int len = 0;
    node* temp = head;
    while(temp!=NULL){ // TC = O(n)
        len++;
        temp= temp->next;
    }
    int mididx = len/2;
    node* mid = head;
    for (int i=1; i<=mididx;i++){
        mid = mid->next;
    }
    return mid;
}


// for interview new logic

node* MiddleNode(node* head){
    node* slow = head;
    node* fast = head;
    while (fast!= NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}


int main(){
    node* a = new node(10); 
    node* b = new node(20);
    node* c = new node(30);
    node* d = new node(40);
    node* e = new node(50);


    a->next =b;
    b->next =c;
    c->next =d;
    d->next =e;
    node* head =a;
    display(head);
    display(middlenode(head));
    display(MiddleNode(head));


 


}