int Solution::compareVersion(string A, string B) {
    int i=0,j=0;
    while(i<A.length() || j<B.length()){
        string num1="",num2="";
        int f=0;
        while(A[i]!='.' && i<A.length()){
            if(f==0 && (A[i]=='0')){
                f=1;
                i++;
                continue;
            }
            num1=num1+A[i];
            f=1;
            i++;
        }
        f=0;
        while(B[j]!='.' && j<B.length()){
            if(f==0 && B[j]=='0'){
                f=1;
                j++;
                continue;
            }
            num2=num2+B[j];
            f=1;
            j++;
        }
        if(num1.length()>num2.length()){
            return 1;
        }
        else if(num2.length()>num1.length()){
            return -1;
        }
        else{
            for(int k=0;k<num1.length();k++){
                if(num1[k]>num2[k]){
                    return 1;
                }
                else if(num1[k]<num2[k]){
                    return -1;
                }
            }
        }
        i++,j++;
    }
    return 0;
}

