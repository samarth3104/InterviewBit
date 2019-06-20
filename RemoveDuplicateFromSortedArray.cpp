int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    int s=0, e=A.size()-1, len=0;
    while(s<=e){
        A[len] = A[s++];
        while(A[s]==A[len] && s<=e){
            s++;
        }
        len++;
    }
    return len;
}

