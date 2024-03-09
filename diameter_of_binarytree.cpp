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

int diameter(TreeNode* node) {
    if (node == nullptr) {
        return 0;
    }

    int leftHeight = height(node->left);
    int rightHeight = height(node->right);

    int leftDiameter = diameter(node->left);
    int rightDiameter = diameter(node->right);

    return std::max(leftHeight + rightHeight + 2,
                   std::max(leftDiameter, rightDiameter));
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

    std::cout << "The diameter of the binary tree is: " << diameter(root) << std::endl;

    return 0;
}