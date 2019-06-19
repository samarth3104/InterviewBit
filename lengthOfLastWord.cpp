int Solution::lengthOfLastWord(const string A) {
    int len = A.length();
    int i = len-1;
    int count = 0;
    int j = len-1;
    while(A[j]==' ') {
        j--;
    }
    i = j;
    while(i>=0) {
        if(A[i]==' ') {
            return count;
        }
        else {
            count++;

        }
        i--;
    }
    return count;
}

