struct node{
    bool exist;
    node* arr[26];
    node(){
        exist=false;
        for(int i=0;i<26;i++){
            arr[i]=NULL;
        }

    }
};
bool cmp(const pair<int, int>& a, const pair<int, int>& b){
        if(a.first == b.first) return a.second < b.second;
    return a.first > b.first;
}
void add(node* root,string s){
    int n=s.length();
    node* curr=root;
    for(int i=0;i<n;i++){
        if(curr->arr[s[i]-'a']==NULL){
            curr->arr[s[i]-'a']=new node();
        }
        curr=curr->arr[s[i]-'a'];
    }
    curr->exist=true;
}

bool check(node* root,string s){
    node* curr=root;
    for(int i=0; i<s.length(); i++){
        if(curr->arr[s[i]-'a']==NULL)    return false;
        curr = curr->arr[s[i]-'a'];
    }
    return curr->exist;
}
void convert(string &str){
    //Convert _ to spaces
    for(int i=0; i<str.size(); i++)    if(str[i]=='_')    str[i]=' ';
    return;
}
vector<int> Solution::solve(string good, vector<string>& review){
    convert(good);
    node* trie = new node();
    string word;
    stringstream ss;
    ss<<good;
    while(ss>>word)    add(trie,word);
    int n = review.size();
    int k;
    vector<pair<int,int> > rating(n);
    for(int i=0; i<n; i++){
        convert(review[i]);
        ss.clear();
        ss<<review[i];
        k=0;
        while(ss>>word)    if(check(trie,word))    k++;
        rating[i].first = k;    rating[i].second = i;
    }
    sort(rating.begin(),rating.end(),cmp);
    vector<int> ans(n);
    for(int i=0; i<n; i++)    ans[i] = rating[i].second;
    return ans;
}
