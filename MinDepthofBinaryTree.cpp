/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int aa(TreeNode* curr){
    if(!curr->left && !curr->right){
        return 1;
    }
    if(!curr->left && curr->right){
        return 1+aa(curr->right);
    }
    if(!curr->right && curr->left){
        return 1+aa(curr->left);
    }
    int h=1+min(aa(curr->left),aa(curr->right));
    return h;
}
int Solution::minDepth(TreeNode* A) {
    return aa(A);
}
