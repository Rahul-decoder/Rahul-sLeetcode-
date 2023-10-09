class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        int i,n1=queries.size(),j;
        vector<vector<int>> v(n,vector<int>(n,0));
        for(i=0;i<n1;i++)
        {
            int r1=queries[i][0],c1=queries[i][1],r2=queries[i][2],c2=queries[i][3];
            for(j=r1;j<=r2;j++)
            {
                v[j][c1]+=1;
                if(c2+1<n)
                v[j][c2+1]+=-1;
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<n;j++)
                v[i][j]=v[i][j]+v[i][j-1];
        }
        return v;
    }
};