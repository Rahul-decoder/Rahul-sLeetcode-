class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> vs,ve,ans;
        int i,n=flowers.size(),n1=people.size();
        for(i=0;i<n;i++)
        {
            vs.push_back(flowers[i][0]);
            ve.push_back(flowers[i][1]);
        }
        sort(vs.begin(),vs.end());
        sort(ve.begin(),ve.end());
        for(i=0;i<n1;i++)
        {
            int p=people[i];
            int l=upper_bound(vs.begin(),vs.end(),p)-vs.begin();
            int u=lower_bound(ve.begin(),ve.end(),p)-ve.begin();
            ans.push_back(l-u);
        }
        return ans;
    }
};