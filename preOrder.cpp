/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void aa(vector<int> &ans,TreeNode* A){
    if(A==NULL){
        return;
    }
    ans.push_back(A->val);
    aa(ans,A->left);
    aa(ans,A->right);

}
vector<int> Solution::preorderTraversal(TreeNode* A) {

    vector<int> ans;
    aa(ans,A);
    return ans;

}

