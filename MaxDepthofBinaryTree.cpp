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
    if(curr==NULL){
        return 0;
    }
    int h=1+max(aa(curr->left),aa(curr->right));
    return h;
}
int Solution::maxDepth(TreeNode* A) {
    return aa(A);
}
