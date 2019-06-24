vector<int> Solution::twoSum(const vector<int> &A, int B) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<A.size();i++){
        int temp=B-A[i];
        if(m.find(temp)==m.end()){
            if(m.find(A[i])==m.end())
                m[A[i]]=i;
        }

        else{
            unordered_map<int,int>::iterator it=m.find(temp);
            ans.push_back((it->second)+1);
            ans.push_back(i+1);
            break;
        }
    }
    return ans;
}

