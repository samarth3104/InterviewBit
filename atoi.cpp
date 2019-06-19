
int Solution::atoi(const string A) {
    int n=A.length();
    int i=0;
    for(;i<n;i++){
        if(isspace(A[i])){
            continue;
        }
        else{
            break;
        }
    }
    int neg=0;
    if(A[i]=='-'){
        neg=1;
        i++;
    }
    else if(A[i]=='+'){
        i++;
    }
    long long ans=0;
    if(!(A[i]>=48 && A[i]<=57)){
        return 0;
    }
    for(;i<n;i++){
        if(A[i]>=48 && A[i]<=57){
            ans=ans*10+(A[i]-'0');
        }
        else{
            break;
        }
        if(ans>INT_MAX){
            if(neg==0){
                return INT_MAX;
            }
            else{
                return INT_MIN;
            }
        }

    }
    if(neg==0){
        return ans;
    }
    else{
        ans=ans*(-1);
        return ans;
    }
}
