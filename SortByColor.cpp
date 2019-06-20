void Solution::sortColors(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int a=0,b=0,c=0;
    for(int i=0;i<A.size();i++){
        if(A[i]==0){
            a++;
        }
        if(A[i]==1){
            b++;
        }
        if(A[i]==2){
            c++;
        }
    }
    int j=0;
    for(int i=0;i<a;i++){
        A[j++]=0;
    }
    for(int i=0;i<b;i++){
        A[j++]=1;
    }
    for(int i=0;i<c;i++){
        A[j++]=2;
    }
}

