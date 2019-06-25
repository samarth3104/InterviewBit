
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {

    queue<pair<TreeNode*,int> > q;
    map<int,vector<int>> mp;
    vector<vector<int> > ans;
    if(A==NULL){
        return ans;
    }
    q.push(make_pair(A,0));
    while(!q.empty()){
        pair<TreeNode*,int> curr=q.front();
        q.pop();
        mp[curr.second].push_back(curr.first->val);
        if(curr.first->left!=NULL){
            q.push(make_pair(curr.first->left,curr.second-1));
        }
        if(curr.first->right!=NULL){
            q.push(make_pair(curr.first->right,curr.second+1));
        }
    }

    map<int,vector<int>>::iterator it;
    for(it=mp.begin();it!=mp.end();it++){

        ans.push_back(it->second);
    }
    return ans;
}
