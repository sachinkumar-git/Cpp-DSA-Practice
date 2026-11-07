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

// Function to calculate the sum of all node values in the tree
int sum(node* root) {
    if (root == NULL) return 0; // Base case: If node is NULL, return 0
    return root->val + sum(root->left) + sum(root->right);
}

// Function to calculate the product of all node values in the tree
int product(node* root) {
    if (root == NULL) return 1; // Change from 0 to 1 to avoid multiplication by 0
    return root->val * product(root->left) * product(root->right);
}

// Function to calculate the size (number of nodes) in the tree
int size(node* root) {
    if (root == NULL) return 0; // Base case: If node is NULL, return 0
    return 1 + size(root->left) + size(root->right);
}

// Function to find the maximum value in the tree
int maxInTree(node* root) {
    if (root == NULL) return INT_MIN; // Base case: If node is NULL, return smallest integer
    int lMax = maxInTree(root->left);  // Find max in left subtree
    int rMax = maxInTree(root->right); // Find max in right subtree
    return max(root->val, max(lMax, rMax)); // Return the largest value among root, left, and right
}

// Function to find the minimum value in the tree
int minInTree(node* root) {
    if (root == NULL) return INT_MAX; // Base case: If node is NULL, return largest integer
    int lMin = minInTree(root->left);  // Find min in left subtree
    int rMin = minInTree(root->right); // Find min in right subtree
    return min(root->val, min(lMin, rMin)); // Return the smallest value among root, left, and right
}

// Function to find the level of the tree
int levels(node* root) {
    if (root == NULL) return 0; // Base case: If node is NULL, return 0
    return 1 + max(levels(root->left), levels(root->right));
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

    // Printing different calculations
    cout << "Sum of all nodes: " << sum(a) << endl;
    cout << "Product of all nodes: " << product(a) << endl;
    cout << "Size of the tree: " << size(a) << endl;
    cout << "Maximum value in tree: " << maxInTree(a) << endl;
    cout << "Minimum value in tree: " << minInTree(a) << endl;
    cout << "level of tree: "<<levels(a)<<endl;
    cout<< "height of tree: "<<levels(a)-1;
    return 0;
}
