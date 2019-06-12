int Solution::trailingZeroes(int A) {
    int a=0;
    while(A){
        A=A/5;
        a=a+A;
    }
    return a;
}

