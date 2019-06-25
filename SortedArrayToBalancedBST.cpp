/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* aa(int s,int e,const vector<int> &A){
    if(s>e){
        return NULL;
    }
    int m=(s+e)/2;
    TreeNode* root=new TreeNode(A[m]);
    root->left=aa(s,m-1,A);
    root->right=aa(m+1,e,A);
    return root;
}
TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    return aa(0,A.size()-1,A);

}

