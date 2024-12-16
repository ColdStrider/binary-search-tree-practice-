#ifndef BST_h
#define BST_h

#include <string>

struct TNode {
    std::string name;
    std::string column2;
    std::string column3;
    std::string column4;

    // Add left/right pointer
    TNode* left;
    TNode* right;

    TNode(const std::string& n, const std::string& c2, const std::string& c3, const std::string& c4);
};

class BST {
private:
    TNode* root;
//insert and order the BST
    TNode* insert(TNode* root,  const std::string& name, const std::string& c2, const std::string& c3, const std::string& c4);
    void inorderTraversal(TNode* root);

public:
    BST();

    // Public methods
    void insert(const std::string& name, const std::string& c2, const std::string& c3, const std::string& c4);
    void inorderTraversal();
};

#endif 
