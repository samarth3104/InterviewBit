
void Solution::nextPermutation(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int f=0;
    int n=A.size();
    for(int i=0;i<n-1;i++){
        if(A[i]<A[i+1]){
            f=1;
            break;
        }
    }
    if(f==0){
        int s=0,e=n-1;
        while(s<e){
            swap(A[s],A[e]);
            s++;
            e--;
        }
        return;
    }
    int i;
    for(i=n-1;i>0;i--){
        if(A[i]>A[i-1]){
            break;
        }
    }
    int x=i-1;
    int mn=INT_MAX,mni=-1;
    for(int j=i;j<n;j++){
        if(A[j]>A[x] && A[j]<mn){
            mn=A[j];
            mni=j;
        }
    }
    swap(A[mni],A[x]);
    sort(A.begin()+i,A.end());

}
