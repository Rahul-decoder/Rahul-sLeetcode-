class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n=values.size(),ans=0,i;
        map<int,int> mp;
        vector<pair<int,int>> v;
        for(i=0;i<n;i++)
            v.push_back({values[i],labels[i]});
        sort(v.begin(),v.end());
        for(i=n-1;i>=0;i--)
        {
            int r=v[i].first,s=v[i].second;
            if(mp[s]<useLimit)
            {
                ans+=r;
                mp[s]++;
                numWanted--;
            }
            if(numWanted==0)
                break;
        }
        return ans;
    }
};