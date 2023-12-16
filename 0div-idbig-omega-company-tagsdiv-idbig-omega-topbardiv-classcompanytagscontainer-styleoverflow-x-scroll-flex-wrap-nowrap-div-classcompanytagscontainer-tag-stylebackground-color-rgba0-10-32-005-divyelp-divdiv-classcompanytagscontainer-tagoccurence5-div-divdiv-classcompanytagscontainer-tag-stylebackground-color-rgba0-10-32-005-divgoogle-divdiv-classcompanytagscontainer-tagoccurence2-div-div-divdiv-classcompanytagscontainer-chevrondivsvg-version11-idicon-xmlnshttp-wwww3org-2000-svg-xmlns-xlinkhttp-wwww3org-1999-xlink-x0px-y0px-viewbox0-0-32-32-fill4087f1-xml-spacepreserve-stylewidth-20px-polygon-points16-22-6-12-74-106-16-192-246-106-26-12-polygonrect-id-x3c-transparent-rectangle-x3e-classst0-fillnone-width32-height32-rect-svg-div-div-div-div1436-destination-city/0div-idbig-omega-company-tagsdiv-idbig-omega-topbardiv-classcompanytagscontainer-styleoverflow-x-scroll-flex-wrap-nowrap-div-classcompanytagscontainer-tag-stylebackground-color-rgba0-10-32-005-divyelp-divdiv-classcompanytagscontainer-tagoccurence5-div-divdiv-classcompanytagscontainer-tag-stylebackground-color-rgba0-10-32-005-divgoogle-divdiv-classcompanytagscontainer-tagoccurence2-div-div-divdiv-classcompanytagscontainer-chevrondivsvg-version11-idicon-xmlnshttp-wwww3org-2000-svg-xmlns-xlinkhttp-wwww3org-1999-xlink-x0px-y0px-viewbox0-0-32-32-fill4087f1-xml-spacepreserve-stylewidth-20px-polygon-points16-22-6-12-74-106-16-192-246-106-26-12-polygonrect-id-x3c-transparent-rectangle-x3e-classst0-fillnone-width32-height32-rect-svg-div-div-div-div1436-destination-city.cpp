class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        int i,n=paths.size();
        for(i=0;i<n;i++)
        {
            mp[paths[i][0]]++;
            if(mp[paths[i][1]]==0)
            mp[paths[i][1]]=0;
        }
        for(auto x:mp)
        {
            if(x.second==0)
                return x.first;
        }
        return "";
    }
};