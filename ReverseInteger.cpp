int Solution::reverse(int A) {
    int m=0;

    int f=0;
    if(A<0){
        f=1;
        A=0-A;
    }
    //cout<<A<<" ";
    int p = A;
    while(p>0){
        if(m>INT_MAX/10 || m<INT_MIN/10) return 0;

        m=m*10+p%10;

        p=p/10;
    }
    //cout<<m<<" ";
    if(f==1) return (0-m);
    return m;
}

