int Solution::isPower(int A) {
    if(A==1){
        return true;
    }
    for(int i=2;i*i<=A;i++){
        int x=log(A)/log(i);
        if(pow(i,x)==A){
            return true;
        }
    }
    return false;
}

