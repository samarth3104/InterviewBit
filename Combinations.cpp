void haha(int A,int B,int st,int sz,vector<vector<int> > &v,vector<int> &curr){
    if(sz==B){
        v.push_back(curr);
        return;
    }
    for(int i=st;i<=A;i++){
        curr.push_back(i);
        haha(A,B,i+1,sz+1,v,curr);
        curr.pop_back();
    }
    return;
}
vector<vector<int> > Solution::combine(int A, int B) {
    vector<vector<int> > v;
    vector<int > arr;
    haha(A,B,1,0,v,arr);
    return v;
}

