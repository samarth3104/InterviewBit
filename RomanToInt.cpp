int Solution::romanToInt(string s) {
    int ans=0;
    int cnt=0;
    int n=s.length();
    map<char,int> m={ { 'I', 1 }, { 'V', 5 }, { 'X', 10 }, { 'L', 50 }, { 'C', 100 }, { 'D', 500 }, { 'M', 1000 } };
    for(int i=0;i<n;i++){
        if(i<n-1){
            if(m[s[i]]<m[s[i+1]]){
                ans=ans-m[s[i]];
            }
            else{
                ans=ans+m[s[i]];
            }
        }
        else{
            ans=ans+m[s[i]];
        }
    }
    return ans;
}

