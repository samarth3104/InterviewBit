struct node{
    int cnt;
    node* arr[26];
    node(){
        cnt=0;
        for(int i=0;i<26;i++)arr[i]=NULL;
    }
};
node* add(node* root,string s){

    int n=s.length();
    node* curr=root;
    for(int i=0;i<n;i++){
        if(!curr->arr[s[i]-'a']){
            curr->arr[s[i]-'a']=new node();
        }
        curr=curr->arr[s[i]-'a'];
        curr->cnt=(curr->cnt)+1;
    }
    return root;
}
vector<string> Solution::prefix(vector<string> &A) {
    vector<string> v;
    node* root=new node();
    for(int i=0;i<A.size();i++){
        root=add(root,A[i]);
    }
    for(int i=0;i<A.size();i++){
        node* curr=root;
        string s="";
        for(int j=0;j<A[i].length();j++){
            s=s+A[i][j];
            curr=curr->arr[A[i][j]-'a'];
            if(curr->cnt==1){
                break;
            }
        }
        v.push_back(s);
    }
    return v;
}
