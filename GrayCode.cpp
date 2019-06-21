vector<int> Solution::grayCode(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<int> v;
    v.push_back(0);
    for(int i=0;i<A;i++){
        int sz=v.size();
        for(int j=sz-1;j>=0;j--){
            int temp=v[j]|(1<<i);
            v.push_back(temp);
        }
    }
    return v;
}

