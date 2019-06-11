vector<int> Solution::allFactors(int A) {
    vector<int> v;
    int x=sqrt(A);
    //cout<<x<<"p ";
    for(int i=1;i<=x;i++){
        if(A%i==0){
            //cout<<i<<" ";
            v.push_back(i);
            if(i*i!=A){
                v.push_back(A/i);
            }
        }
    }
    sort(v.begin(),v.end());
    return v;
}

