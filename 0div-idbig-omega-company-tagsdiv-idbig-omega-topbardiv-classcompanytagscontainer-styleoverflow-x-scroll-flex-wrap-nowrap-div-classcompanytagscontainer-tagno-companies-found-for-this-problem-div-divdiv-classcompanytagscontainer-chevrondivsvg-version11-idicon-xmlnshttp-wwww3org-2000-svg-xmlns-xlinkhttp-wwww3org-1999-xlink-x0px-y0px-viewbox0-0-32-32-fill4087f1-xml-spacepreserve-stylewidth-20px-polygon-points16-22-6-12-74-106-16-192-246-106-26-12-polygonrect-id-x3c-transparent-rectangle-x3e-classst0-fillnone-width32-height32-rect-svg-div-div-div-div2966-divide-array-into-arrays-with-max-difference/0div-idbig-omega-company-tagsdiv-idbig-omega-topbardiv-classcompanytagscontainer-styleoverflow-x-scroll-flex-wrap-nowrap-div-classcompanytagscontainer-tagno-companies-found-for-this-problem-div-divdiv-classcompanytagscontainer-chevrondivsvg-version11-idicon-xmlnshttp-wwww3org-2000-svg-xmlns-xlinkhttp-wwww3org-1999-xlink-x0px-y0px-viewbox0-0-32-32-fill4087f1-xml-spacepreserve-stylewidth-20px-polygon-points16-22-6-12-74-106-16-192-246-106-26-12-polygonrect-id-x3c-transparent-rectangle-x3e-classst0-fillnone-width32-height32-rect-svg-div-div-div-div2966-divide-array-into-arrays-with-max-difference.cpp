class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i,n=nums.size();
        vector<vector<int>> v,vac;
        vector<int> v1;
        for(i=n-1;i>=0;i--)
        {
            v1.push_back(nums[i]);
            if(v1.size()==3)
            {
                if(v1[0]-v1[2]<=k)
                {
                    v.push_back(v1);
                    v1.clear();
                }
                else
                    return vac;
            }
        }
        return v;
    }
};