#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

// Definition of a tree node
class node {
public:
    int val;
    node* left;
    node* right;
    
    // Constructor to initialize a node
    node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to display the tree in Preorder Traversal (Root -> Left -> Right)
void displayTree(node* root) {
    if (root == NULL) return;
    cout << root->val << " "; // Print current node value
    displayTree(root->left);  // Recursively print left subtree
    displayTree(root->right); // Recursively print right subtree
}

 

int main() {
    // Creating tree nodes
    node* a = new node(1); // Root node
    node* b = new node(2);
    node* c = new node(3);
    node* d = new node(4);
    node* e = new node(5);
    node* f = new node(6);
    node* g = new node(7);

    // Connecting nodes to form the binary tree
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    // Display tree using Preorder Traversal
    displayTree(a);
    cout << endl;

    cout << "Level of tree: " << levels(a) << endl;
    cout << "Diameter of tree: " << diameterofBinaryTree(a) << endl;

    return 0;
}
