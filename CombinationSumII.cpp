void haha(vector<int> &A,vector<vector<int> > &v,int in,vector<int> &curr,int sum,int B){

    if(sum==B){
        v.push_back(curr);
        return;
    }
    if(sum>B){
        return;
    }
    for(int i=in;i<A.size();i++){
        if(i==in || A[i]!=A[i-1]){
            curr.push_back(A[i]);
            haha(A,v,i+1,curr,sum+A[i],B);
            curr.pop_back();
        }
    }
    return;
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    vector<vector<int> > v;
    vector<int> curr;
    sort(A.begin(),A.end());

    haha(A,v,0,curr,0,B);
    return v;
}


