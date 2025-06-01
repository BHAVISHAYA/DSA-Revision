//todo - Tree traversal (By DFS) 

#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right; 

        Node(int data) {
            this -> data = data;
            this -> left = NULL;
            this -> right = NULL;
        }
};


//* Left --> Root --> Right
//? Inorder means, root is in-between left and right
void inorderTraversal(Node* &root) {
    if(root != NULL) {
        inorderTraversal(root -> left);
        cout << root -> data << " ";
        inorderTraversal(root -> right);
    }
}


//* Root --> Left --> Right
//? Preorder means root is at the starting  
void preorderTraversal(Node* &root) {
    if(root != NULL) {
        cout << root -> data << " ";
        preorderTraversal(root -> left);
        preorderTraversal(root -> right);
    }
}


//* Left --> Right --> Root
//? Post means root is at the last
void postorderTraversal(Node* &root) {
    if(root != NULL) {
        postorderTraversal(root -> left);
        postorderTraversal(root -> right);
        cout << root -> data << " ";
    }
}

int main() {
    Node* root = new Node(10);
    root -> left = new Node(8);
    root -> right = new Node(12);
    root -> left -> left = new Node(6);
    root -> left -> right = new Node(9);
    root -> right -> left = new Node(11);
    root -> right -> right = new Node(14);
    cout << "Inorder Traversal = ";
    inorderTraversal(root);
    cout << "\n" << endl;

    cout << "Preorder Traversal = ";
    preorderTraversal(root);
    cout << "\n" << endl;

    cout << "Postorder Traversal = ";
    postorderTraversal(root);
}