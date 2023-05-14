#ifndef TREE_H
#define TREE_H

typedef struct _Node {
    int value;
    struct _Node* left;
    struct _Node* right;
} Node;

Node* makeTree();
Node* createNode(int value);
void printNode(Node* root);

#endif
