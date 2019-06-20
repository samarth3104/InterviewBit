int Solution::threeSumClosest(vector<int> &A, int B) {
    int n=A.size();
    sort(A.begin(),A.end());
    int ans=100000000;
    for(int i=0;i<n-2;i++){
        int s=i+1;
        int e=n-1;
        while(s<e){
            int temp=A[i]+A[s]+A[e];
            if(abs(temp-B)<abs(ans-B)){
                ans=temp;
            }
            if(temp>B){
                e--;
            }
            else{
                s++;
            }
        }
    }
    return ans;
}

