TreeNode* buildBST(vector<int>& v,int s,int e)
{
    if(s>e) return NULL;
    int mid = (s+e)/2;
    TreeNode* root = new TreeNode(v[mid]);
    root->left =  buildBST(v,s,mid-1);
    root->right =  buildBST(v,mid+1,e);
    return root;

}
TreeNode* Solution::sortedListToBST(ListNode* head) {


    ListNode* temp = head ;
    vector<int> v;
    while(temp){
        v.push_back(temp->val);
        temp=temp->next;
    }

    TreeNode * ans  = buildBST(v,0,v.size()-1);
    return ans;
}
