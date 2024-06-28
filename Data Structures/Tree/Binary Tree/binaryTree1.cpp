/*
Binary Trees are a Tree Data Structure with only atmost 2 children. So they can have one or maximum of 2 children.
We usually call the first child as left and second(last) child as right.

BinaryTree1 Objectives:
1. Build a Binary tree with a root node and its children.
2. Insert a node to a child node.
3. Create an Inorder Traversal for Tree (left->parent->right).

So we will try to build a Binary Tree like ->

                    1(root)
                <-      ->
            2               3
        <-      ->
    4               5          

and we will try to insert "6" and "7" nodes to 3 and 5 nodes. 
*/

#include <iostream>

class Tree {
public: int data; Tree* left; Tree* right;

public: Tree(int root) {
        data = root;
        left = nullptr;
        right = nullptr;
    }

public: void addLeft(int leftData) {
        Tree* leftNode = new Tree(leftData);
        this->left = leftNode;
    }

public: void addRight(int rightData) {
        Tree* rightNode = new Tree(rightData);
        this->right = rightNode;
    }

public: void printInOrder() {
        // Prints left->parent(data)->right using recursion
        if (left != nullptr) {
            left->printInOrder();
        }
        std::cout << data << " ";
        if (right != nullptr) {
            right->printInOrder();
        }
    }
};

int main() {

    // Create Root Node
    Tree root(1);

    // Create other Nodes
    Tree firstLeftChild(2);
    Tree firstRightChild(3);
    Tree secondLeftChild(4);
    Tree secondRightChild(5);

    // Add the Nodes to Root Node
    root.left = &firstLeftChild;
    root.right = &firstRightChild;

    // Add the Nodes to firsrLeftChild Node
    firstLeftChild.left = &secondLeftChild;
    firstLeftChild.right = &secondRightChild;

    // We have created the desired tree

    // Print Inorder of Root Node ---> " 4 2 5 1 3 "
    std::cout << "Inorder of Tree is -> ";
    root.printInOrder();
    std::cout << std::endl;

    // Now adding 6 to Node 3
    Tree newNode1(6);
    firstRightChild.left = &newNode1;

    // and Adding 7 to Node 5
    Tree newNode2(7);
    secondRightChild.left = &newNode2;

    // Print Inorder of Updated Root Node ---> " 4 2 7 5 1 6 3 "
    std::cout << "Inorder traversal of Updated Tree is -> ";
    root.printInOrder();
    std::cout << std::endl;

    return 0;
}