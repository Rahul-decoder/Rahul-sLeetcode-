class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b)
    {
        if(a.first==b.first)
            return a.second<b.second;
        return a.first<b.first;
    }
    int minimumAverageDifference(vector<int>& nums) {
        long long int n=nums.size(),i;
        long long int a[n],r,s;
        vector<pair<long long int,long long int>> v;
        a[0]=nums[0];
        for(i=1;i<n;i++)
            a[i]=a[i-1]+nums[i];
        for(i=0;i<n;i++)
        {
             r=(a[i])/(i+1);
            if(i!=n-1)
             s=(a[n-1]-a[i])/(n-i-1);
            else
             s=0;
            v.push_back({abs(r-s),i});
        }
        sort(v.begin(),v.end(),comp);
        return v[0].second;
        }
};