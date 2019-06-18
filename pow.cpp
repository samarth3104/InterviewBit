int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(x==0){
        return 0;
    }
    if(n==0)
        return 1 % d;
    if(n==1)
        return ((x % d)+d)%d;

    long long a=1;
    x=((x%d)+d)%d;
    while(n>0){
        if(n&1){
            a=(a*x)%d;
        }
        x=(x*x)%d;
        n=n>>1;
        //cout<<n<<" ";
    }
    //ans=ans+10000;
    if(a<0){
        a=a+d;
    }

    return a;
}

