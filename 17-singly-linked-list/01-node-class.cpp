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

    // node a;
    // a.val = 10;
    // node b;
    // b.val = 20;
    // node c;
    // c.val = 30;
    // node d;
    // d.val = 40;
    
    // formaing linked list 
    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    // cout<<b.val;
    cout<<(a.next)-> val;
    // (a.next) b ka address

    // print karni hai d ki value
    // cout<< (*((*((*(a.next)).next)).next)).val;
    cout<< (((a.next)->next)->next)->val;

    return 0;
}