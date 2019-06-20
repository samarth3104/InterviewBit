int Solution::singleNumber(const vector<int> &A) {
    int c[32];
    for(int i=0;i<32;i++){
        c[i]=0;
    }
    for(int i=0;i<32;i++){
        for(int j=0;j<A.size();j++){
            int temp=A[j]>>i;
            int h=temp&1;
            c[i]=(c[i]+h)%3;
        }
    }
    int ans=0;
    for(int i=0;i<31;i++){
        if(c[i]==1){
            ans=ans+pow(2,i);
        }
    }
    return ans;
}

