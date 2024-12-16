//
//  BSTCfile.cpp
//  project
//
//  Created by Cody Shay on 12/1/23.
//


#include "BST.h"
#include <iostream>


BST::BST() : root(nullptr) {}

//   Node constructor for each element.
TNode::TNode(const std::string& n, const std::string& c2, const std::string& c3, const std::string& c4)
    : name(n), column2(c2), column3(c3), column4(c4), left(nullptr), right(nullptr) {}

//Insertion method
TNode* BST::insert(TNode* root, const std::string& name, const std::string& c2, const std::string& c3, const std::string& c4) {
    if (root == nullptr) {
        return new TNode(name, c2, c3, c4);
    }

    if (name < root->name) {
        root->left = insert(root->left, name, c2, c3, c4);
    } else if (name > root->name) {
        root->right = insert(root->right, name, c2, c3, c4);
    }

    return root;
}

// Tdraversal method
void BST::inorderTraversal(TNode* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);blue
        std::cout << "Name: " << root->name << ", Size: " << root->column2 << ", Health: " << root->column3 << ", Armor Class: " << root->column4 << std::endl;
        inorderTraversal(root->right);
    }
}

void BST::insert(const std::string& name, const std::string& c2, const std::string& c3, const std::string& c4) {
    root = insert(root, name, c2, c3, c4);
}

void BST::inorderTraversal() {
    inorderTraversal(root);
}
