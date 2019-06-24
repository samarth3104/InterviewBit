vector<vector<int> > Solution::fourSum(vector<int> &arr, int tar) {
    set<vector<int>> ans;

    sort(arr.begin(),arr.end());
    unordered_map<int,set<pair<int,int> > > mp;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int sum=arr[i]+arr[j];
            if(mp.find(tar-sum)!=mp.end()){
                set<pair<int,int> > x=mp[tar-sum];
                set<pair<int,int> >::iterator it;
                for(it=x.begin();it!=x.end();it++){
                    if(it->first==i||it->second==i||it->first==j||it->second==j){
                        continue;
                    }
                    vector<int> kk;
                    kk.push_back(arr[it->first]);
                    kk.push_back(arr[it->second]);
                    kk.push_back(arr[i]);
                    kk.push_back(arr[j]);
                    sort(kk.begin(),kk.end());
                    ans.insert(kk);
                }
            }

            mp[sum].insert(make_pair(i,j));
        }
    }
    return vector<vector<int>>(ans.begin(),ans.end());

}
