#include <iostream>
using namespace std;

class node { // this is tree node 
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

bool search(node* root, int key) {
    if (root == NULL) return false;

    if (root->val == key) return true;

    // Recursively search in left and right subtrees
    return search(root->left, key) || search(root->right, key);
}

// insertIntoBST function
node* insertIntoBST(node* root, int val) {
    if (root == NULL) return new node(val);

    if (val < root->val) { // go left
        if (root->left == NULL) {
            root->left = new node(val);
        } else {
            insertIntoBST(root->left, val);
        }
    } else { // go right
        if (root->right == NULL) {
            root->right = new node(val);
        } else {
            insertIntoBST(root->right, val);
        }
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

    int key;
    cout << "\nEnter value to search: ";
    cin >> key;

    if (search(a, key))
        cout << key << " found in the tree.\n";
    else
        cout << key << " not found in the tree.\n";


    insertIntoBST(a, 45);
    

    return 0;
}
