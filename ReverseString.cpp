void Solution::reverseWords(string &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    vector<string> v;
    int n=A.length();
    string s="";
    for(int i=0;i<n;i++){
        if(isspace(A[i])){
            v.push_back(s);
            s="";
        }
        else{
            s=s+A[i];
        }
    }
    v.push_back(s);
    reverse(v.begin(),v.end());
    A="";
    for(int i=0;i<v.size()-1;i++){
        A=A+v[i]+" ";
    }
    A=A+v[v.size()-1];
}

