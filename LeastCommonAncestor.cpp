/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int f1;
 void aa(vector<int> &v,int B,TreeNode* A){
     if(A==NULL){
         return;
     }
     if(A->val==B){
         f1=1;
         v.push_back(A->val);
         return;
     }
     v.push_back(A->val);
     aa(v,B,A->left);
     if(f1==1)return;
     aa(v,B,A->right);
     if(f1==1)return;
     v.pop_back();
 }

int Solution::lca(TreeNode* A, int B, int C) {
    vector<int> v1,v2;
    f1=0;
    aa(v1,B,A);
    if(f1==0){
        return -1;
    }
    f1=0;
    aa(v2,C,A);
    if(f1==0){
        return -1;
    }
    int i=0;
    while(1){
        if(i==v1.size() || i==v2.size()){
            return v1[i-1];
        }
        if(v1[i]!=v2[i]){
            return v1[i-1];
        }
        i++;
    }

}
