class Solution {
public:
    string frequencySort(string s) {
        int i,n=s.size();
        map<char,int> mp;
        string ans="";
        for(i=0;i<n;i++)
            mp[s[i]]++;
        vector<pair<int,char>> v;
        for(auto x:mp)
        v.push_back({x.second,x.first});
        sort(v.rbegin(),v.rend());
        for(i=0;i<v.size();i++)
        {
            int r=v[i].first;
            char ch=v[i].second;
            while(r--)
                ans.push_back(ch);
        }
        return ans;
    }
};