class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int i,n=pairs.size(),j;
        vector<int> v(n,0);
        sort(pairs.begin(),pairs.end());
        v[0]=1;
        for(i=1;i<n;i++)
        {
            int a=pairs[i][0],maxi=0;
            for(j=i-1;j>=0;j--)
            {
                if(a>pairs[j][1])
                    maxi=max(maxi,v[j]);
            }
            v[i]=maxi+1;
        }
        return v[n-1];
    }
};