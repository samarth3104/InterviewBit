int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0,j=0,k=0;
    int ans=INT_MAX;
    while(i<A.size()&&j<B.size()&&k<C.size()){
        int temp=max(abs(A[i]-B[j]),max(abs(A[i]-C[k]),abs(B[j]-C[k])));
        if(temp<ans){
            ans=temp;
        }
        if(A[i]<=B[j] && A[i]<=C[k]){
            i++;
        }
        else if(B[j]<=A[i] && B[j]<=C[k]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;
}

