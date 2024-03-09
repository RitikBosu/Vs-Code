#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
    node(int x){
        data=x;
        left=right=NULL;
    }
};
int height(node* root){
    if (root==NULL) return 0;
    int l=height(root->left);
    int r=height(root->right);
    return max(l,r)+1;
}
