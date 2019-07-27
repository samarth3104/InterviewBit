
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::levelOrder(TreeNode* A) {
    queue<pair<TreeNode*,int> > q;
    q.push({A,0});
    vector<vector<int> > ans;
    vector<int> v;
    int prev=-1;
    while(!q.empty()){
        TreeNode* t=q.front().first;
        int l=q.front().second;
        q.pop();
        if(prev!=l){
            if(prev!=-1){
                ans.push_back(v);
            }
            v.clear();
        }
        v.push_back(t->val);
        if(t->left){
            q.push({t->left,l+1});
        }
        if(t->right){
            q.push({t->right,l+1});
        }
        prev=l;
    }
    ans.push_back(v);
    return ans;
}
