unsigned int Solution::reverse(unsigned int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    unsigned int num=0;
    for(int i=0;i<32;i++){
        int temp=A>>i;
        if(temp&1){
            num=num+pow(2,(31-i));
        }
    }
    return num;
}

