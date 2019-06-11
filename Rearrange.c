void Solution::arrange(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    for(int i = 0; i < A.size(); ++i){
        int new_num = A[A[i]] & 0x0000ffff;
        A[i] = A[i] | (new_num << 16);
    }
    for(int i; i < A.size(); ++i){
        A[i] >>=  16;
    }
}

