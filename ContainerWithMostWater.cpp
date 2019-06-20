int Solution::maxArea(vector<int> &A) {
    if(A.size()==1){
        return 0;
    }
    int i=0,j=A.size()-1;
    int ans=-1;
    while(i<j){
       int h=min(A[i],A[j]);
       h=h*(j-i);
       ans=max(ans,h);
       if(A[i]<A[j]){
           i++;
       }
       else if(A[j]<A[i]){
           j--;
       }
       else{
           i++;
           j--;
       }
    }
    return ans;
}

