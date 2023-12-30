class Solution {
public:
    bool makeEqual(vector<string>& words) {
        map<char,int> mp;
        int i,n=words.size(),j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<words[i].size();j++)
            mp[words[i][j]]++;
        }
        for(auto x:mp)
        {
            if(x.second%n!=0)
                return 0;
        }
        return 1;
    }
};