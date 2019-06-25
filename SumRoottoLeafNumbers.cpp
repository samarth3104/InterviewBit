/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int sum=0;
int m=1003;
void aa(TreeNode* A,int num){
    if(!A->left && !A->right){
        int s=num*10+A->val;
        sum=(sum+s)%m;
    }
    if(A->left){
        aa(A->left,(num*10+A->val)%m);
    }
    if(A->right){
        aa(A->right,(num*10+A->val)%m);
    }
}
int Solution::sumNumbers(TreeNode* A) {
    sum=0;
    aa(A,0);
    return sum;
}

