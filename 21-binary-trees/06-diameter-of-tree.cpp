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

// Function to find the height of the tree
int levels(node* root) {
    if (root == NULL) return 0; // Base case: If node is NULL, return 0
    return 1 + max(levels(root->left), levels(root->right));
}

// Helper function to calculate diameter
int diameterHelper(node* root, int &maxDia) {
    if (root == NULL) return 0;
    
    int leftHeight = diameterHelper(root->left, maxDia);
    int rightHeight = diameterHelper(root->right, maxDia);
    
    // Update maximum diameter found so far
    maxDia = max(maxDia, leftHeight + rightHeight);
    
    // Return the height of the current subtree
    return 1 + max(leftHeight, rightHeight);
}

// Function to find the diameter of the binary tree
int diameterofBinaryTree(node* root) {
    int maxDia = 0;
    diameterHelper(root, maxDia);
    return maxDia;
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
