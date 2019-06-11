
void Solution::rotate(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int n=A.size();
    int s=0,e=n-1;
    while(s<e){
        for(int i=s;i<e;i++){
            int temp=A[s][i];
            A[s][i]=A[e-(i-s)][s];
            A[e-(i-s)][s]=A[e][e-(i-s)];
            A[e][e-(i-s)]=A[i][e];
            A[i][e]=temp;
        }
        s++;
        e--;
    }
}
