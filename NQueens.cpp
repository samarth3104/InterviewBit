void haha(vector<vector<string> > &v,vector<string> &s, vector<int> &p,int in,int A){
    if(in==A){
        v.push_back(s);
        return;
    }
    for(int i=0;i<A;i++){
        int f=0;
        for(int j=0;j<p.size();j++){
            if(i==p[j]){
                f=1;
                break;
            }
            if(abs(in-j)==abs(i-p[j])){
                f=1;
                break;
            }
        }
        if(f==0){
            p.push_back(i);
            string x="";
            for(int j=0;j<A;j++){
                if(j==i){
                    x=x+"Q";
                }
                else{
                    x=x+".";
                }
            }
            s.push_back(x);
            haha(v,s,p,in+1,A);
            s.pop_back();
            p.pop_back();
        }
    }
}


vector<vector<string> > Solution::solveNQueens(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<vector<string> >v;
    vector<string> s;
    vector<int> p;
    haha(v,s,p,0,A);
    return v;

}

