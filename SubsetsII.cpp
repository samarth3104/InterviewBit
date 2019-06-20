vector<vector<int> > Solution::subsetsWithDup(vector<int> &A) {
    if(A.size()==1){
        return{{},{A[0]}};
    }
    sort(A.begin(), A.end());
    int n = A.size();
    set<vector<int>> st;
    for(int i=0; i<pow(2,n); i++){
        vector<int> sub;
        for(int j=0; j<n; j++){
            if((i & (1 << j)) != 0){
                sub.push_back(A[j]);
            }
        }
        st.insert(sub);
    }
    vector<vector<int>> v(st.size());
    int in=0;
    for(auto i=st.begin(); i!=st.end(); i++){
        v[in] = *i;
        in++;
    }
    return v;
}
