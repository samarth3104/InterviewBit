/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int flag=0;
void aa(TreeNode* curr,int B,int sum){
    //cout<<sum<<" ";
    if(!curr->left && !curr->right){
        if(sum+curr->val==B){
            flag=1;
        }
        return;
    }
    if(curr->left)
        aa(curr->left,B,sum+curr->val);
    if(flag==1){
        return;
    }
    if(curr->right)
        aa(curr->right,B,sum+curr->val);


}
int Solution::hasPathSum(TreeNode* A, int B) {
    flag=0;
    aa(A,B,0);
    return flag;
}

