vector<int> Solution::prevSmaller(vector<int> &A) {
    stack<int> s;

    int n=A.size();
    vector<int> v(n);
    s.push(n-1);
    for(int i=n-2;i>=0;i--){
        if(A[i]<A[i+1]){
            while(!s.empty() && A[s.top()]>A[i]){
                v[s.top()]=A[i];
                s.pop();
            }
            s.push(i);
        }
        else{
            s.push(i);
        }
    }
    while(!s.empty()){
        v[s.top()]=-1;
        s.pop();
    }
    return v;
}

