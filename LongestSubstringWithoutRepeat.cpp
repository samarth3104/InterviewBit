int Solution::lengthOfLongestSubstring(string A) {
    unordered_map<char,int> m;
    int start=0,end=0,len=0;
    while(end<A.size()){

        if(m.count(A[end])&&m[A[end]]>=start){
            start=m[A[end]]+1;
        }

        if(len<end-start+1){
            len=end-start+1;
        }
        m[A[end]]=end;
        end++;
    }
    return len;
}
