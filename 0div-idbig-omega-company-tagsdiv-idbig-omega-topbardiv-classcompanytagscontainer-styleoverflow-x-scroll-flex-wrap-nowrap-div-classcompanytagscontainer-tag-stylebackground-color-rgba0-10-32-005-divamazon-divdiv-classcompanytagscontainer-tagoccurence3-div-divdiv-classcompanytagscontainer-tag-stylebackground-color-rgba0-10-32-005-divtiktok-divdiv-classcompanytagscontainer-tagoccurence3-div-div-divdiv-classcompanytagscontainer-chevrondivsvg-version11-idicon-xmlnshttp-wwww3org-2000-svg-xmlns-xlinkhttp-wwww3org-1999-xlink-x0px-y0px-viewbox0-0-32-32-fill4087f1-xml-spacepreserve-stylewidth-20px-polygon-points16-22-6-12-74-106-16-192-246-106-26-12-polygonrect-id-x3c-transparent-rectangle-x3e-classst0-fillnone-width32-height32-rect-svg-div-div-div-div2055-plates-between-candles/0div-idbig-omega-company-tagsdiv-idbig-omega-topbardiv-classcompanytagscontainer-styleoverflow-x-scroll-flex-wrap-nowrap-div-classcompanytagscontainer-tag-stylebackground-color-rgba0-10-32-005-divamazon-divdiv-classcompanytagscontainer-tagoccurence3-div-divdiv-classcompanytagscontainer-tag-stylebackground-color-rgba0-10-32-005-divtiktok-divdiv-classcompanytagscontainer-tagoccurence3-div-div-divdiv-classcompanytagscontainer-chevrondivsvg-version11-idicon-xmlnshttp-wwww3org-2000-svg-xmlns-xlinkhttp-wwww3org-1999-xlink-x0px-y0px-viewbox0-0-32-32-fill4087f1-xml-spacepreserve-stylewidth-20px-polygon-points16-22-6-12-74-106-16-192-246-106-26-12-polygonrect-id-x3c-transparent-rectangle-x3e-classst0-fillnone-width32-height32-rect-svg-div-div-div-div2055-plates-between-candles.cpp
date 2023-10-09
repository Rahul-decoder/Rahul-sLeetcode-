class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        int i,n=s.size(),count=0,n1=queries.size();
        vector<int> v,vs(n),ans;
        for(i=0;i<n;i++)
        {
           if(s[i]=='|')
               v.push_back(i);
            else
                count++;
            vs[i]=count;
        }
        for(i=0;i<n1;i++)
        {
            int a=queries[i][0],b=queries[i][1],p=0,q=0;
            int l=lower_bound(v.begin(),v.end(),a)-v.begin();
            int u=lower_bound(v.begin(),v.end(),b)-v.begin();
            if(l==v.size()||v[l]>b)
                l=-1;
            if(u==v.size())
                u--;
            if(u>=0&&v[u]>b)
                u--;
            if(l>=0&&u>=0)
            p=v[l],q=v[u];
            ans.push_back(vs[q]-vs[p]);
        }
        return ans;
    }
};