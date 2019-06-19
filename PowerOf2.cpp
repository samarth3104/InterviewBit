int Solution::power(string A) {
    if(A=="1"){
        return 0;
    }
    string s;
    while(A!="1"){
        int n=A.length();
        int x=A[n-1]-'0';
        if(x%2==1){
            return 0;
        }
        int num=0;
        s="";
        for(int i=0;i<n;i++){
            x=A[i]-'0';
            if((A[i]=='1' || A[i]=='0') && num==0 && i!=0 && i!=n-1){
                s=s+"0";
            }

            num=num*10+x;
            if(num>=2 || i==n-1){
                s=s+to_string(num/2);
                num=num%2;
            }
        }
        //cout<<s<<" ";
        A=s;
    }
    return 1;
}

