#include <iostream>
#include <algorithm>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

int height(TreeNode* node) {
    if (node == nullptr) {
        return -1;
    }
    return std::max(height(node->left), height(node->right)) + 1;
}

void printHeight(TreeNode* node, int height) {
    if (node == nullptr) {
        return;
    }

    if (height == 0) {
        std::cout << node->data << " ";
    } else {
        printHeight(node->left, height - 1);
        printHeight(node->right, height - 1);
    }
}

int main() {
    // Construct the binary tree as follows:
    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4   5 6   7

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    int h = height(root);
    std::cout << "Height of the binary tree is: " << h << std::endl;
    std::cout << "Nodes at height " << h << ": ";
    printHeight(root, h);
    std::cout << std::endl;

    return 0;
}