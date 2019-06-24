int product(string s){
    int p=1;
    for(int i=0;i<s.length();i++){
        p=p*(s[i]-'0');
    }
    return p;
}



int Solution::colorful(int A) {
    string s=to_string(A);
    unordered_map<int,int> m;
    int n=s.length();
    string curr="";
    for(int i=0;i<n;i++){
        curr="";
        for(int j=i;j<n;j++){
            curr=curr+s[j];
            //cout<<i<<j<<product(curr)<<"P ";
            if(m.find(product(curr))==m.end()){
                m[product(curr)]=1;
            }
            else{
                return 0;
            }
        }

    }
    return 1;
}

