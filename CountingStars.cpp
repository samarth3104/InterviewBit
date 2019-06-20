int Solution::nTriang(vector<int> &A) {
    sort(A.begin(),A.end());
    long long count=0,i,left,right;
    for(i=0;i<A.size();++i)
    {
        left=0;
        right=i-1;
        while(left<right)
        {
            if(A[left]+A[right]>A[i])
            {
                count+=right-left;
                right--;
            }
            else
            {
                left++;
            }
        }
    }
    long long n=pow(10,9);
    int ans=count%(n+7);
    return ans;
}
