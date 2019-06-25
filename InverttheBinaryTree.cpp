/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void aa(TreeNode* A){
    if(A==NULL){
        return;
    }
    TreeNode* x;
    TreeNode* y;
    x=A->left;
    y=A->right;
    A->left=y;
    A->right=x;
    aa(A->left);
    aa(A->right);
    return;
}

TreeNode* Solution::invertTree(TreeNode* A) {
    aa(A);
    return A;
}
