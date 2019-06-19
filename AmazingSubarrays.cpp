
int Solution::solve(string s) {

    int n=s.length();
    int ans=0;
    int m=10003;
    for(int i=0;i<n;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            ans=(ans+n-i)%m;
        }
    }
    return ans;
}
