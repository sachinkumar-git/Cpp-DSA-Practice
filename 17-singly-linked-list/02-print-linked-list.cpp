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
int main(){
    // 10 20 30 40 

    // constructer
    node a(10);
    node b(20);
    node c(30);
    node d(40);

    // formaing linked list 
    a.next = &b;
    b.next = &c;
    c.next = &d;
     

    node temp = a;
    // while (temp.next != NULL)
    while (1){
        cout <<temp.val<<" ";
        if (temp.next==NULL) break;
        temp = *(temp.next);
    }

    return 0;
}