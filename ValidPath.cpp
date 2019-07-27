
bool dfs(int A,int B,int x,int y,vector<vector> &cutting){
    if(A==x && B==y && cutting[A][B]==0) return 1;
    if(A>x || B>y) return 0;
    if(A<0 || B<0) return 0;
    if(cutting[A][B]==1) return 0;
    cutting[A][B]=1;
    if(dfs(A+1,B,x,y,cutting)) return 1;
    if(dfs(A+1,B+1,x,y,cutting)) return 1;
    if(dfs(A,B+1,x,y,cutting)) return 1;
    if(dfs(A-1,B+1,x,y,cutting)) return 1;
    if(dfs(A-1,B,x,y,cutting)) return 1;
    if(dfs(A-1,B-1,x,y,cutting)) return 1;
    if(dfs(A,B-1,x,y,cutting)) return 1;
    if(dfs(A+1,B-1,x,y,cutting)) return 1;
    return 0;
}

string Solution::solve(int A, int B, int C, int D, vector &E, vector &F) {
    vector<vector> cutting(A+1,vector(B+1,0));
    for(int i=0;i<=A;i++)
        for(int j=0;j<=B;j++){
            for(int k=0;k<C;k++){
                if(((i-E[k])(i-E[k]))+((j-F[k])(j-F[k]))<=D*D){
                    cutting[i][j]=1;
                    break;
                }
        }
    }
    if(dfs(0,0,A,B,cutting))
    return “YES”;
    else return “NO”;
}
