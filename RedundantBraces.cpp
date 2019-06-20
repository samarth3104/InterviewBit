int Solution::braces(string A) {
    stack<char> s;
    for(int i=0;i<A.length();i++){
        char c=A[i];
        if(c=='('||c=='+'||c=='-'||c=='*'||c=='/'){
            s.push(c);
        }
        else if(c==')'){
            if(s.top()=='('){
                return 1;
            }
            else{
                while(s.top()!='('){
                    s.pop();
                }
                s.pop();
            }
        }
    }
    return 0;
}

