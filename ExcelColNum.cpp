int Solution::titleToNumber(string A) {
    int s = A.size();
    int l =s-1;
    int sum=0;
    for(int i=0;i<s;i++)
    {
    sum+=pow(26,l)*(A[i]-64);

            l--;
    }
    return sum;

}

