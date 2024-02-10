class Solution {
public:
    int countSubstrings(string s) {
        int i,j,n=s.size(),count=0;
        vector<vector<int>> v(n,vector<int>(n,0));
        for(i=0;i<n;i++)
        {
            int r=0;
            for(j=i;j<n;j++)
            {
               if(j==r)
               {
                   v[r][j]=1;
                   count++;
               }
                else
                {
                    if(s[r]==s[j]&&j-r==1)
                    {
                        v[r][j]=1;
                        count++;
                    }
                    else if(s[r]==s[j]&&v[r+1][j-1]==1)
                    {
                        v[r][j]=1;
                        count++;
                    }
                }
                r++;
            }
        }
        return count;
    }
};