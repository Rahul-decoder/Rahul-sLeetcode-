class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<long long int> v(n,0);
        long long int i,n1=roads.size(),sum=0;
        for(i=0;i<n1;i++)
        {
            v[roads[i][0]]++;
            v[roads[i][1]]++;
        }
        vector<pair<int,int>> v1;
        for(i=0;i<n;i++)
        v1.push_back({v[i],i});
        sort(v1.begin(),v1.end());
        reverse(v1.begin(),v1.end());
        for(i=0;i<n;i++)
            v[v1[i].second]=n-i;
        for(i=0;i<n1;i++)
            sum+=v[roads[i][0]]+v[roads[i][1]];
        return sum;
    }
};