
int Solution::nchoc(int A, vector<int> &B) {
    int n=B.size();
    long long ans=0;
    long long m=1000000007;
    priority_queue<int> q;
    for(int i=0;i<n;i++){
        q.push(B[i]);
    }
    while(A--){
        ans=(ans+q.top())%m;
        int temp=q.top();
        q.pop();
        q.push(temp/2);
    }
    return ans;
}
