int Solution::isNumber(const string A) {
    int e=0,dot=0;
    int n=A.length();
    int i=0;
    int sign=0;
    for(;i<n;i++){
        if(isspace(A[i])){
            continue;
        }
        else{
            break;
        }
    }
    if(A[i]=='-' || A[i]=='+'){
        i++;
    }
    int f=0;
    for(;i<n;i++){
        if(A[i]>=48&&A[i]<=57){
            f=1;
            continue;
        }
        else if(A[i]=='e'){
            if(e==1){
                //cout<<"1";
                return 0;
            }
            if(f==1){
                e=1;
                if(i+1==n){
                    return 0;
                }
                if(A[i+1]=='-' || A[i+1]=='+'){
                    if(i+2==n){
                        return 0;
                    }
                    continue;
                }
            }
            else{
                //cout<<"2";
                return 0;
            }
        }
        else if(A[i]=='.'){
            if(dot==1 || e==1){
                //cout<<"3";
                return 0;
            }
            else{
                f=1;
                dot=1;
                if(i+1==n || A[i+1]=='e'){
                    return 0;
                }
            }
        }
        else if(A[i]=='-' || A[i]=='+'){
            if(sign==1){
                return 0;
            }
            else if(e==0){
                return 0;
            }

        }
        else if(isspace(A[i])&&f==1){
            i++;
            break;
        }
        else{
            //cout<<"4"<<A[i]<<" ";
            return 0;
        }
    }
    for(;i<n;i++){
        if(isspace(A[i])){
            continue;
        }
        else{
            return 0;
        }
    }
    if(f==1){
        return 1;
    }
    //cout<<"5";
    return 0;
}
