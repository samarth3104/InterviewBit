int Solution::isPrime(int A) {
    int n=sqrt(A);
    int f=1;
    if(A==1)
        return 0;
    for(int i=2;i<=n;i++){
        if(A%i==0){
            //cout<<i<<" ";
            f=0;
            break;
        }
    }
    return f;
}

