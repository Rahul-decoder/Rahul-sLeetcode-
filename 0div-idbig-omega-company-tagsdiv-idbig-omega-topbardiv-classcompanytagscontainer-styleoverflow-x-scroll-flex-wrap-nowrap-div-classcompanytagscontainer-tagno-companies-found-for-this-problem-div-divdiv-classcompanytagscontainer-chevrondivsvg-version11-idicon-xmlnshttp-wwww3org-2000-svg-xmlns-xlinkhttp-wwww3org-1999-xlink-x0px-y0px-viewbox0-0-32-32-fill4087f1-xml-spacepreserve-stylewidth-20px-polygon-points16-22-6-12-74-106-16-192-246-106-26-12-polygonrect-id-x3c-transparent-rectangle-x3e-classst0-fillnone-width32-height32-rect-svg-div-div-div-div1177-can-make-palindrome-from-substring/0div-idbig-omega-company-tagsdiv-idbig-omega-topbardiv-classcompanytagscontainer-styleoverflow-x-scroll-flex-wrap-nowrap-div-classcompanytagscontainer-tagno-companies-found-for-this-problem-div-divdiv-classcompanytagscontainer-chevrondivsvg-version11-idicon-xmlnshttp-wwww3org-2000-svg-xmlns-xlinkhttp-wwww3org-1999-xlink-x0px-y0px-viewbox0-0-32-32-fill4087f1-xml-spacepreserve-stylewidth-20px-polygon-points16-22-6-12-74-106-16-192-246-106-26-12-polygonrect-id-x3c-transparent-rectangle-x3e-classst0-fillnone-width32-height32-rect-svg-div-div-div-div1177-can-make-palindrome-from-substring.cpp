class Solution {
public:
    vector<bool> canMakePaliQueries(string s, vector<vector<int>>& queries) {
        int i,n=s.size(),n1=queries.size(),j;
        vector<vector<int>> v(n);
        vector<int> pre(26,0);
        vector<bool> ans;
        for(i=0;i<n;i++)
        {
            pre[s[i]-'a']++;
            v[i]=pre;
        }
        for(i=0;i<n1;i++)
        {
            int a=queries[i][0],b=queries[i][1],count=0,k=queries[i][2];
            vector<int> temp3(26);
            for(j=0;j<26;j++)
            temp3[j]=v[b][j]-v[a][j];
            temp3[s[a]-'a']++;
            for(j=0;j<26;j++)
            {
                if(temp3[j]%2!=0)
                    count++;
            }
            if(count==1)
                ans.push_back(1);
            else
            {
                if(k>=count/2)
                    ans.push_back(1);
                else
                    ans.push_back(0);
            }
        }
        return ans;
    }
};