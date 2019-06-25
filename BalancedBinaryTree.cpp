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
int aa(TreeNode* curr){
    if(curr==NULL){
        return 0;
    }
    int lft=aa(curr->left);
    int rght=aa(curr->right);
    if(abs(lft-rght)>1){
        f=0;
    }
    return 1+max(lft,rght);
}

int Solution::isBalanced(TreeNode* A) {
    f=1;
    aa(A);
    return f;
}

