int Solution::diffPossible(vector<int> &A, int B) {
    int i=0,j=1;
    while(j<A.size()){
        int x=A[j]-A[i];
        if(x==B){
            return 1;
        }
        if(x>B){
            i++;
        }
        else{
            j++;
        }
        if(i==j){
            j++;
        }
    }
    return 0;
}

