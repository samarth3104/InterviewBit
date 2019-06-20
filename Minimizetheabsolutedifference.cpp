int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
    int a=A.size()-1,b=B.size()-1,c=C.size()-1;
    int ans=INT_MAX;
    while(1){
        int mn=min(A[a],min(B[b],C[c]));
        int mx=max(A[a],max(B[b],C[c]));
        if(mx-mn<ans){
            ans=mx-mn;
        }
        if(A[a]==mx){
            a--;
            if(a<0)break;
        }
        if(B[b]==mx){
            b--;
            if(b<0)break;
        }
        if(C[c]==mx){
            c--;
            if(c<0)break;
        }
    }
    return ans;
}
