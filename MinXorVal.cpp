// O(log n) using sorting

int Solution::findMinXor(vector<int> &arr) {
    int n=arr.size();
    sort(arr.begin(), arr.end());

    int minXor = INT_MAX;
    int val = 0;

    // calculate min xor of consecutive pairs
    for (int i = 0; i < n - 1; i++) {
        val = arr[i] ^ arr[i + 1];
        minXor = min(minXor, val);
    }

    return minXor;
}












//Can be solved using trie in O(n) but gives memory limit exceed

struct trie{
    trie* left;
    trie* right;
};

void insert(trie* head,int num){
    trie* t=head;
    for(int i=31;i>=0;i--){
        int x=(num>>i)&1;
        if(x==0){
            if(!(t->left)){
                t->left=new trie();
                t->left->left=NULL;
                t->left->right=NULL;
            }
            t=t->left;
        }
        else{
            if(!(t->right)){
                t->right=new trie();
                t->right->left=NULL;
                t->right->right=NULL;
            }
            t=t->right;
        }
    }
}

int minXor(trie* head,int val){
    trie* curr=head;
    int f=0;
    for(int j=31;j>=0;j--){
        int b=(val>>j)&1;
        if(b==1){
            if(curr->right){
                curr=curr->right;
            }
            else{
                f=f+pow(2,j);
                curr=curr->left;
            }

        }
        else{
            if(curr->left){
                curr=curr->left;
            }
            else{
                f=f+pow(2,j);
                curr=curr->right;
            }
        }
    }

    return f;

}

int Solution::findMinXor(vector<int> &A) {
    int n=A.size();
    trie* head=new trie();
    insert(head,A[0]);
    int ans=INT_MAX;
    for(int i=1;i<n;i++){
        int temp=minXor(head,A[i]);
        if(temp<ans){
            ans=temp;
        }
        insert(head,A[i]);
    }
    return ans;
}

