#include <iostream>
#include <queue>
#include <vector>

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};

void levelOrderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    std::queue<TreeNode*> nodeQueue;
    nodeQueue.push(root);

    while (!nodeQueue.empty()) {
        int levelSize = nodeQueue.size();
        std::vector<int> levelNodes;

        for (int i = 0; i < levelSize; ++i) {
            TreeNode* currentNode = nodeQueue.front();
            nodeQueue.pop();

            levelNodes.push_back(currentNode->data);

            if (currentNode->left != nullptr) {
                nodeQueue.push(currentNode->left);
            }

            if (currentNode->right != nullptr) {
                nodeQueue.push(currentNode->right);
            }
        }

        for (int value : levelNodes) {
            std::cout << value << " ";
        }
        std::cout << std::endl;
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

    std::cout << "Level order traversal of the binary tree:" << std::endl;
    levelOrderTraversal(root);

    return 0;
}