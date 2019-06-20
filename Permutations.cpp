void haha(vector<int> &A,int in,vector<vector<int> > &v){
    if(in==A.size()-1){
        v.push_back(A);
        return;
    }
    for(int i=in;i<A.size();i++){
        swap(A[i],A[in]);
        haha(A,in+1,v);
        swap(A[i],A[in]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int> >v;
    haha(A,0,v);
    return v;
}

