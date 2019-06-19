string Solution::addBinary(string A, string B) {
    int n=A.length(),m=B.length();
    int c=0;
    string res="";
    while(n>=0 && m>=0){
        int x=A[n]-'0',y=B[m]-'0';
        int s=x+y+c;
        if(s==0){
            res=res+"0";
            c=0;
        }
        if(s==1){
            res=res+"1";
            c=0;
        }
        if(s==2){
            res=res+"0";
            c=1;
        }
        if(s==3){
            res=res+"1";
            c=1;
        }
        n--;
        m--;
    }
    //cout<<c<<" ";
    while(n>=0){
        int x=A[n]-'0';
        int s=x+c;
        if(s==0){
            res=res+"0";
            c=0;
        }
        if(s==1){
            res=res+"1";
            c=0;
        }
        if(s==2){
            res=res+"0";
            c=1;
        }
        n--;
    }
    //cout<<res<<" ";
    while(m>=0){
        int x=B[m]-'0';
        int s=x+c;
        if(s==0){
            res=res+"0";
            c=0;
        }
        if(s==1){
            res=res+"1";
            c=0;
        }
        if(s==2){
            res=res+"0";
            c=1;
        }
        //cout<<res<<" ";
        m--;
    }
    if(c==1){
        res=res+"1";
    }
    reverse(res.begin(),res.end());
    return res;
}

