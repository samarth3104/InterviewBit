vector<int> Solution::lszero(vector<int> &A) {
    unordered_map<int,int> m;
    vector<int> res;
    int n=A.size();
    int sum=0;
    int length=INT_MIN;
    int index1=-1;
    int index2=-1;
    for(int i=0;i<=n-1;i++)
    {
        sum=sum+A[i];
        if(m.find(sum)==m.end())
        {
            m[sum]=i;
        }
        else
        {
            if((i-(m[sum]+1))>length)
            {
                index2=i;
                index1=m[sum]+1;
                length=index2-index1;
            }
        }
        if(sum==0)
        {
            if(i>length)
            {
                index2=i;
                index1=0;
                length=index2-index1;
            }
        }
    }
    if(index1==-1 && index2==-1)
    {
        return res;
    }
    else
    {
        for(int i=index1;i<=index2;i++)
        {
            res.push_back(A[i]);
        }
        return res;
    }
}
