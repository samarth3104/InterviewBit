/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* aa(vector<int> &A,int start,int &end,int level){
    TreeNode* root=new TreeNode(A[start]);
    int i, prev;
    for ( i = start + 1, prev = start; i < A.size() && A[i] < level; ){
        if(A[i]>A[i-1]){
            TreeNode* temp1=root;
            root=new TreeNode(A[i]);
            root->left=temp1;
            prev=i++;
        }
        else{
            root->right=aa(A,i,i,A[prev]);
        }
    }
    end=i;
    return root;
}

TreeNode* Solution::buildTree(vector<int> &A) {
    int i;
    TreeNode* ans=aa(A,0,i,INT_MAX);
    return ans;
}
