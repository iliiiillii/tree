#include "tree.h" 
#include <iostream> 



Node* createNode(int value) {

    Node* newNode = new Node;
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;

}



Node* makeTree() {

    Node* root = createNode(100);
    root->left = createNode(200);
    root->right = createNode(300);
    root->right->left = createNode(400);
    root->right->right = createNode(500);

    return root;
}



void printNode(Node* root) {
    if (root == nullptr)
        return;

    std::cout << root->value << " ";

    printNode(root->left);

    printNode(root->right);
}