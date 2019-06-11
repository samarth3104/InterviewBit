string Solution::findDigitsInBinary(int A) {
    string s="";
    if(A==0){
        s=s+'0';
    }
    while(A>0){
        int x=A%2;
        s=s+to_string(x);
        A=A/2;
    }
    reverse(s.begin(),s.end());
    return s;
}
