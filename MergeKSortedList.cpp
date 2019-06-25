/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>> q;
    int n=A.size();
    for(int i=0;i<n;i++){
        q.push(make_pair(A[i]->val,A[i]));
    }
    if(n==0){
        return NULL;
    }
    ListNode *head=new ListNode(0);
    ListNode *curr=head;
    while(!q.empty()){
        pair<int,ListNode*> x=q.top();
        q.pop();
        ListNode *temp=new ListNode(x.first);
        curr->next=temp;
        curr=curr->next;
        if((x.second)->next!=NULL){
            q.push(make_pair((x.second)->next->val,(x.second)->next));
        }
    }
    return head->next;
}

