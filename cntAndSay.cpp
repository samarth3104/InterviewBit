string Solution::countAndSay(int A) {
    string ans="";
    if(A==0){
        return ans;
    }
    ans=ans+"1";
    string s="";
    int cnt=0;
    for(int i=2;i<=A;i++){
        int n=ans.length();
        cnt=1;
        for(int j=0;j<n;j++){
            if(j!=n && ans[j]==ans[j+1]){
                cnt++;
            }
            else{
                s=s+to_string(cnt)+ans[j];
                cnt=1;
            }
        }
        ans=s;
        s.clear();
    }
    return ans;
}

