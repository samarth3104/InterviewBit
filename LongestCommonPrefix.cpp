string Solution::longestCommonPrefix(vector<string> &A) {
    string ans="";
    if(A.size()==1){
        return A[0];
    }
    for(int i=0;i<min(A[0].length(),A[1].length() );i++){
        if(A[0][i]==A[1][i]){
            ans=ans+A[0][i];
        }
        else{
            break;
        }
    }
    for(int i=2;i<A.size();i++){
        string s="";
        for(int j=0;j<min(ans.length(),A[i].length());j++){
            if(ans[j]==A[i][j]){
                s=s+ans[j];
            }
        }
        ans=s;
        if(ans.length()==0){
            break;
        }
    }
    return ans;
}

