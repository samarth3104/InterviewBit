string Solution::fractionToDecimal(int A, int B) {
    long long a=A,b=B;
    string ans="";
    long long x=a/b;
    int neg=0;
    if(a==0){
        return "0";
    }
    if(a<0){
        neg++;
        a=0-a;
    }
    if(b<0){
        neg++;
        b=0-b;
    }
    if(neg==1){
        ans=ans+"-";
    }
    ans=ans+to_string(x);

    a=a%b;
    if(a==0){
        return ans;
    }
    ans=ans+".";
    unordered_map<int,int> mp;
    while(a>0){
        a=a*10;

        if(mp.find(a)!=mp.end()){
            ans=ans+")";
            int xx=mp[a];
            ans.insert(xx,"(");
            break;
        }
        else{
            mp[a]=ans.length();
        }
        int temp=a/b;
        a=a%b;
        ans=ans+to_string(temp);
    }
    return ans;
}

