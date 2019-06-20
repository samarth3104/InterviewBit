vector<vector<int> > Solution::threeSum(vector<int> &A) {
    vector<vector<int> > v;
    sort(A.begin(),A.end());
    int n=A.size();
    for(int i=0;i<n-2;i++){
        if(i!=0 && A[i]==A[i-1]){
            continue;
        }
        int s=i+1;
        int e=n-1;
        while(s<e){
            if(s!=i+1 && A[s]==A[s-1]){
                s++;
                continue;
            }
            if(e!=n-1 && A[e]==A[e+1]){
                e--;
                continue;
            }
            int temp=A[i]+A[s]+A[e];
            if(temp==0){
                vector<int> x;
                x.push_back(A[i]);
                x.push_back(A[s]);
                x.push_back(A[e]);
                v.push_back(x);
                s++;
                e--;
            }
            else if(temp>0){
                e--;
            }
            else{
                s++;
            }
        }
    }
    return v;
}

