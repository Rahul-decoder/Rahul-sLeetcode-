class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int i,n=s.size(),ans=0;
        map<char,vector<int>> mp;
        for(i=0;i<n;i++)
            mp[s[i]].push_back(i);
        for(auto x:mp)
        {
            vector<int> v1=x.second;
            int n1=v1.size();
            if(n1>1)
            {
               unordered_map<char,int> mp;
               int p=v1[0],q=v1[n1-1];
               for(i=p+1;i<q;i++)
                   mp[s[i]]++;
                ans+=mp.size();
            } 
        }
        return ans;
    }
};