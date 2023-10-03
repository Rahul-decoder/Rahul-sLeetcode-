class Solution {
public:
    int maxTwoEvents(vector<vector<int>>& events) {
        vector<pair<pair<int,int>,int>> v;
        int i,n=events.size(),maxi=0;
        for(i=0;i<n;i++)
        v.push_back({{events[i][0],events[i][1]},events[i][2]});
        sort(v.begin(),v.end());
        vector<int> mr(n);
        vector<int> v1;
        for(i=0;i<n;i++)
        v1.push_back(v[i].first.first);
        int temp=INT_MIN;
        for(i=n-1;i>=0;i--)
        {
            temp=max(v[i].second,temp);
            mr[i]=temp;
        }
        for(i=0;i<n;i++)
        {
            int count=v[i].second;
            auto it = lower_bound(v1.begin(),v1.end(),v[i].first.second+1);
            int l = it - v1.begin();
            if(l<n)
            count+=mr[l];
            maxi=max(maxi,count);
        }
        return maxi;
    }
};