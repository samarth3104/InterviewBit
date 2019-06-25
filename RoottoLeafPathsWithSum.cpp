/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void aa(TreeNode* curr,int B,int sum,vector<vector<int> > &v,vector<int> &cur){
    //cout<<sum<<" ";
    cur.push_back(curr->val);
    if(!curr->left && !curr->right){
        if(sum+curr->val==B){
            v.push_back(cur);
        }
    }
    if(curr->left){
        aa(curr->left,B,sum+curr->val,v,cur);
    }

    if(curr->right){
        aa(curr->right,B,sum+curr->val,v,cur);
    }
    cur.pop_back();


}
vector<vector<int> > Solution::pathSum(TreeNode* A, int B) {
    vector<vector<int> > ans;
    vector<int> v;
    aa(A,B,0,ans,v);
    return ans;
}
