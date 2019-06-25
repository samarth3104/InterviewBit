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
    x--;
    n->right=aa(A,B,s+1,e,x);
    n->left=aa(A,B,ss,s-1,x);
    return n;
}
TreeNode* Solution::buildTree(vector<int> &A, vector<int> &B) {
    int x=A.size()-1;
    return aa(A,B,0,x,x);
}
