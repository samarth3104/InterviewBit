int Solution::evalRPN(vector<string> &A) {
    stack<int> s;
    for(int i=0;i<A.size();i++){
        string c=A[i];
        if(c=="+"||c=="-"||c=="*"||c=="/"){
            int a=s.top();
            s.pop();
            int b=s.top();
            s.pop();
            int temp;
            if(c=="+")temp=b+a;
            if(c=="-")temp=b-a;
            if(c=="*")temp=b*a;
            if(c=="/")temp=b/a;
            s.push(temp);
        }
        else{
            stringstream ff(c);
            int gg;
            ff >> gg;
            s.push(gg);
        }
    }
    return s.top();
}

