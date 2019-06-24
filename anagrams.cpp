vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    unordered_map<string,vector<int> > mp;
    vector<vector<int> > ans;
    for(int i=0;i<A.size();i++){
        string s=A[i];
        sort(s.begin(),s.end());
        mp[s].push_back(i+1);
    }
    unordered_map<string,vector<int> >::iterator it;
    for(int i=0;i<A.size();i++){
        string s=A[i];
        sort(s.begin(),s.end());
        if(mp[s].size()>=1){
            ans.push_back(mp[s]);
            mp[s].clear();
        }
    }
    return ans;
}

