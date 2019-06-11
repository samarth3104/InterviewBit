vector<int> Solution::sieve(int A) {
    int x[A+1];
    for(int i=0;i<=A;i++){
        x[i]=1;
    }
    x[0]=x[1]=0;
    int n=sqrt(A);
    for(int i=2;i<=n;i++){
        if(x[i]==1){
            //cout<<i<<" ";
            for(int j=2;(i*j)<=A;j++){
                x[i*j]=0;
                //cout<<i*j<<" ";
            }
        }
    }
    vector<int> v;
    for(int i=2;i<=A;i++){
        if(x[i]==1){
            //cout<<i<<" ";
            v.push_back(i);
        }
    }
    return v;
}
