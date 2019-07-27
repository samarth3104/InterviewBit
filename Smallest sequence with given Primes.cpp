
vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int> v;
    v.push_back(1);
    int x=0,y=0,z=0;
    for(int i=0;i<D;i++){
        int t=min(A*v[x],min(B*v[y],C*v[z]));
        v.push_back(t);
        if(t==A*v[x]) x++;
        if(t==B*v[y]) y++;
        if(t==C*v[z]) z++;
    }
    vector<int> v1(v.begin()+1,v.end());
    return v1;
}
