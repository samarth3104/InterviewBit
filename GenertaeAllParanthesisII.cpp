void haha(vector<string> &v,string curr,int in,int left,int A){
    if(in==A+1){
        while(left>0){
            curr=curr+")";
            left--;
        }
        v.push_back(curr);
        return;
    }
    curr=curr+"(";
    haha(v,curr,in+1,left+1,A);
    curr.pop_back();
    if(left>0){
        curr=curr+")";
        haha(v,curr,in,left-1,A);
        curr.pop_back();
    }
}
vector<string> Solution::generateParenthesis(int A) {
    vector<string> v;
    string curr="";
    haha(v,curr,1,0,A);
    return v;
}

