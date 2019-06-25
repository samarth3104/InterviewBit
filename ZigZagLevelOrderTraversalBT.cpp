
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
    map<int,vector<int>> mp;
    queue<pair<int,TreeNode*> > q;
    q.push({1,A});
    TreeNode* curr;
    int lv;
    while(!q.empty()){
        lv=q.front().first;
        curr=q.front().second;
        q.pop();
        mp[lv].push_back(curr->val);
        if(curr->left!=NULL){
            q.push({lv+1,curr->left});
        }
        if(curr->right!=NULL){
            q.push({lv+1,curr->right});
        }
    }
    vector<vector<int> > ans;
    map<int,vector<int>>::iterator it;
    int x=0;
    for(it=mp.begin();it!=mp.end();it++){
        vector<int> v=it->second;
        if(x%2==1){
            reverse(v.begin(),v.end());
        }
        ans.push_back(v);
        x++;
    }
    return ans;
}
