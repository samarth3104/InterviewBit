bool check(string s)
{
    int x = stoi(s);
    if(x>255)
        return false;
    string y = to_string(x);
    if(y!=s)
        return false;
    return true;
}

vector<string> Solution::restoreIpAddresses(string A)
{
    int n = A.size();

    vector<string> ans;
    for(int i=1;i<=3;++i)
        for(int j=1;j<=3;++j)
            for(int k=1;k<=3;++k)
                for(int l=1;l<=3;++l)
                {
                    if(i+j+k+l!=n)
                        continue;
                    string s[4];
                    s[0] = A.substr(0,i);
                    s[1] = A.substr(i,j);
                    s[2] = A.substr(i+j,k);
                    s[3] = A.substr(i+j+k,l);

                    bool flg=0;
                    for(int h=0;h<4;++h)
                        if(check(s[h])==false)
                            flg=1;
                    if(flg)
                        continue;
                    string fin = "";
                    for(int h=0;h<3;++h)
                        fin += s[h]+".";
                    fin += s[3];
                    ans.push_back(fin);
                }
    sort(ans.begin(),ans.end());
    return ans;
}
