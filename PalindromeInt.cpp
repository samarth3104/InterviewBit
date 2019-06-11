int Solution::isPalindrome(int A) {
    if(A<0){
        return 0;
    }
    int nw=0,temp = A;
    while ( temp ){
        nw *= 10;
        nw += temp%10;
        temp /= 10;
    }
    if ( A==nw ) return 1;
    else return 0;
}

