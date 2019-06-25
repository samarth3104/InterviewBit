/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int f=1;
void aa(TreeNode *A,TreeNode *B){
    if(A==NULL && B==NULL){
        return;
    }
    if(A==NULL || B==NULL){
        f=0;
        return;
    }
    if(A->val!=B->val){
        f=0;
        return;
    }
    aa(A->left,B->right);
    if(f==0)return;
    aa(A->right,B->left);
}
int Solution::isSymmetric(TreeNode* A) {
    f=1;
    aa(A,A);
    return f;
}
