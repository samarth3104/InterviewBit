unordered_map<char, string> keypad = {
    { '1', "1" },
    { '2', "abc" },
    { '3', "def" },
    { '4', "ghi" },
    { '5', "jkl" },
    { '6', "mno" },
    { '7', "pqrs" },
    { '8', "tuv" },
    { '9', "wxyz" },
    { '0', "0" }
};
void haha(vector<string> &v,string A,int in){
    if(in==A.length()){
        v.push_back(A);
    }
    string s=keypad[A[in]];
    for(int i=0;i<s.length();i++){
        A[in]=s[i];
        haha(v,A,in+1);
    }
}
vector<string> Solution::letterCombinations(string A) {
    vector<string> v;
    haha(v,A,0);
    return v;
}

