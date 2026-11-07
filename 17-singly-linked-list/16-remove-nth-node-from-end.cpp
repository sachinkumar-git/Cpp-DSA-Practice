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
node* removeNthfromEnd(node* head, int n){
    int len =0;
    node* temp =NULL;
    while(temp!=NULL){
        len++;
        temp = temp->next;

    }
    if (n==len ){
        head = head->next;
        return head;
    }
    // nth from end = (len-n+1)th from start
    int m = len -n + 1;
    int idx = m-1; // the idx of node to be deleted
    temp = head;
    for (int i=1; i<=idx-1; i++){
        temp = temp->next;
    }
    temp->next= temp->next->next;
    return head;

}


node* RemoveNthfromEnd (node* head, int n){
    node* slow = head;
    node* fast = head;
// traverse fast to (n+1) steps
    for (int i=1; i<n+1; i++){
        if (fast == NULL) return head->next;
        fast = fast->next;
    }
    // move slow and fast at same pace
    while(fast!=NULL){
        slow = slow->next;
        fast=fast->next;
    }
    // now the slow is exactly at left of the nth node from end
    slow->next = slow->next->next;
    return head;
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
    display(RemoveNthfromEnd(head, 3 ));


 


}