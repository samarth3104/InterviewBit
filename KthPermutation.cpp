
int factorial(int n) {
        if (n > 12) {
            // this overflows in int. So, its definitely greater than k
            // which is all we care about. So, we return INT_MAX which
            // is also greater than k.
            return INT_MAX;
        }
        // Can also store these values. But this is just < 12 iteration, so meh!
        int fact = 1;
        for (int i = 2; i <= n; i++) fact *= i;
        return fact;
    }

string Solution::getPermutation(int A, int B) {
    string ans="";
    vector<int> v;
    if (A == 0) {
        return "";
        }
        if (B > factorial(A)) return "";
    for(int i=1;i<=A;i++){
        v.push_back(i);
    }
    B--;
    for(int i=1;i<=A;i++){
        int n=factorial(A-i);
        int k=B/n;
        B=B%n;
        ans=ans+to_string(v[k]);
        v.erase(v.begin()+k);
    }
    return ans;
}
