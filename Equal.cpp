vector<int> Solution::equal(vector<int> &A) {
    unordered_map<int,pair<int,int> > mp;
    vector<vector<int> > ans;
    for(int i=0;i<A.size();i++){
        for(int j=i+1;j<A.size();j++){
            int sum=A[i]+A[j];
            if(mp.find(sum)!=mp.end()){
                unordered_map<int,pair<int,int> >::iterator p=mp.find(sum);
                if(p->second.first==i||p->second.first==j||p->second.second==i||p->second.second==j){
                    continue;
                }
                vector<int> ll;
                ll.push_back(p->second.first);
                ll.push_back(p->second.second);
                ll.push_back(i);
                ll.push_back(j);
                ans.push_back(ll);
            }
            mp[sum]=make_pair(i,j);
        }
    }
    vector<int> anss;
    if(ans.size()==0){
        return anss;
    }
    sort(ans.begin(),ans.end());
    anss=ans[0];
    return anss;
}

