string Solution::multiple(int A) {
    queue<int> q;

    q.push((1%A));
    vector<int> vis(A+1,-1);
    vis[1%A]=1;
    vector<pair<int,char>> par(A+1,{-1,'1'});
    while(!q.empty()){
       int tp = q.front();
        q.pop();

        if(tp==0){
            string s="";

            s+=par[0].second;
            int p = par[0].first;
            while(p!=-1){
                s+=par[p].second;
                p = par[p].first;
            }

            reverse(s.begin(),s.end());

            return s;
        }

          int a1 = (tp*10)%A;
          int a2 = ((tp*10)%A+1)%A;
          if(vis[a1]==-1){

          q.push(a1);

          vis[a1] =1;
          par[a1] = {tp,'0'};
          }

          if(vis[a2]==-1){

          q.push(a2);

          vis[a2]=1;

          par[a2] = {tp,'1'};
          }



    }
}











//Below sol gives MLE

*/string Solution::multiple(int A) {
    string s="1";
    if(A==1) return s;
    queue<pair<string,int> > q;
    q.push({s,1});
    string ans;
    while(!q.empty()){
        s=q.front().first;
        int rem=q.front().second;
        q.pop();
        rem=rem*10;
        if(rem%A==0){
            ans=s+"0";
            break;
        }
        if((rem+1)%A==0){
            ans=s+"1";
            break;
        }
        q.push({s+"0",rem%A});
        q.push({s+"1",(rem+1)%A});
    }
    return ans;
}
/*
