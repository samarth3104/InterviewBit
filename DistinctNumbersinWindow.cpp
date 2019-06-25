vector<int> Solution::dNums(vector<int> &A, int B) {
    map<int,int> mp;
    vector<int> ans;
    for(int i=0;i<B;i++){
        mp[A[i]]++;
    }
    ans.push_back(mp.size());
    for(int i=B;i<A.size();i++){
        if(mp[A[i-B]]==1){
            mp.erase(mp.find(A[i-B]));
        }
        else{
            mp[A[i-B]]--;
        }

        mp[A[i]]++;

        ans.push_back(mp.size());
    }
    return ans;
}
