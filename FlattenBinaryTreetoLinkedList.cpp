/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::flatten(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    TreeNode* root=A;
    TreeNode* curr=root;
    while(curr){
        if(curr->left){
            TreeNode* x=curr->left;
            curr->left=NULL;
            TreeNode* y=curr->right;
            TreeNode* z=x;
            while(z->right){
                z=z->right;
            }
            z->right=y;
            curr->right=x;
        }
        curr=curr->right;
    }
    return root;
}
