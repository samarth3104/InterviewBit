
int Solution::isPalindrome(string A) {
    for(long long i =0,  j = A.size()-1; i<j ;){

    if(!isalnum(A[i])){
        i++; continue;
    }
    if(!isalnum(A[j])){
        j--; continue;
    }

    if(tolower(A[i]) != tolower(A[j])){

        return 0;
    }
    i++; j--;
}

return 1;
}
