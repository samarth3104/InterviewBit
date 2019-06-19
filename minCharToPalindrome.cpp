int Solution::solve(string A) {
    vector<int> v;
    int n=A.length();
    for(int i=n-1;i>=0;i--){
        if(A[i]==A[0]){
            v.push_back(i);
        }
    }
    int ans=-1;
    for(int i=0;i<v.size();i++){
        int x=0,y=v[i];
        int f=0;
        while(x<=y){
            if(A[x]!=A[y]){
                f=1;
                break;
            }
            x++,y--;
        }
        if(f==0){
            ans=n-1-v[i];
            break;
        }
    }
    return ans;
}

