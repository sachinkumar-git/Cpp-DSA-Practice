#include <iostream>
using namespace std;

class node {
public:
    int val;
    node* left;
    node* right;

    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Display function (inorder traversal)
void display(node* root) {
    if (root == NULL) return;
    display(root->left);
    cout << root->val << " ";
    display(root->right);
}

// Delete only leaf node with given key
node* deleteLeaf(node* root, int key) {
    // leaf node
    if (root->val == key) return NULL;
    else if (root->val>key){ // go left 
        root->left = deleteLeaf(root->left, key);
    }
    else { // go right 
        root->right = deleteLeaf(root->right, key);
    }
 return root;
}

int main() {
    node* a = new node(10); // root
    node* b = new node(5);
    node* c = new node(15);
    node* d = new node(2);
    node* e = new node(8);
    node* f = new node(12);
    node* g = new node(18);
    node* h = new node(6);
    node* i = new node(13);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    e->left = h;
    c->left = f;
    c->right = g;
    f->right = i;

    cout << "Initial Tree (inorder): ";
    display(a);

    int key;
    cout << "\n\nEnter a value to delete (only leaf nodes will be deleted): ";
    cin >> key;

    a = deleteLeaf(a, key);

    cout << "Tree after deletion (inorder): ";
    display(a);
    cout << endl;

    return 0;
}
