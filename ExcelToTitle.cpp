string Solution::convertToTitle(int A) {
    string s="";
    while(A>0){
        int x=A%26;
        if(x==0){
            s=s+'Z';
            A=A/26;
            A--;
            continue;
        }
        else{
            s=s+char(x+64);
        }
        A=A/26;
    }
    reverse(s.begin(),s.end());
    return s;
}

