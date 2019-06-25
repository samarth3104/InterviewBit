/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* aa(vector<int> &A, vector<int> &B,int s,int e,int &x){
    if(s>e){
        return NULL;
    }
    int ss=s;
    for(;s<e;s++){
        if(A[s]==B[x]){
            break;
        }
    }
    TreeNode* n=new TreeNode(A[s]);
    x++;
    n->left=aa(A,B,ss,s-1,x);
    n->right=aa(A,B,s+1,e,x);
    return n;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int x=0;
    return aa(B,A,0,A.size()-1,x);
}
