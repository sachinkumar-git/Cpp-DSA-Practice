#include <iostream>
using namespace std;
class node{ // this is tree node 
    public:
    int val;
    node* left;
    node* right;
    node(int val){
        this->val=val;
        this->left = NULL;
        this->right = NULL;
    }
};
// Function to find the level of the tree
int levels(node* root) {
    if (root == NULL) return 0; // Base case: If node is NULL, return 0
    return 1 + max(levels(root->left), levels(root->right));
}


// to print element of nth level of tree
void nthLevel(node* root, int current, int level){
    if(root==NULL) return;  // base case
    if (current == level) {
        cout<<root->val<<" ";
        return;
    }
    nthLevel(root->left, current+1, level ); // call 1
    nthLevel(root->right, current+1, level); // call 2

}

//level order traversal

void LevelorderTraversal(node* root){
    int n = levels(root);
    for (int i=1; i<=n; i++){
        nthLevel(root,1, i );
    } 

}


int main(){ 
    node* a = new node(1); // root
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);
 
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f; 
    c->right=g;

    
    nthLevel(a,1,3);
    cout<<endl;

    LevelorderTraversal(a);

    return 0;
}