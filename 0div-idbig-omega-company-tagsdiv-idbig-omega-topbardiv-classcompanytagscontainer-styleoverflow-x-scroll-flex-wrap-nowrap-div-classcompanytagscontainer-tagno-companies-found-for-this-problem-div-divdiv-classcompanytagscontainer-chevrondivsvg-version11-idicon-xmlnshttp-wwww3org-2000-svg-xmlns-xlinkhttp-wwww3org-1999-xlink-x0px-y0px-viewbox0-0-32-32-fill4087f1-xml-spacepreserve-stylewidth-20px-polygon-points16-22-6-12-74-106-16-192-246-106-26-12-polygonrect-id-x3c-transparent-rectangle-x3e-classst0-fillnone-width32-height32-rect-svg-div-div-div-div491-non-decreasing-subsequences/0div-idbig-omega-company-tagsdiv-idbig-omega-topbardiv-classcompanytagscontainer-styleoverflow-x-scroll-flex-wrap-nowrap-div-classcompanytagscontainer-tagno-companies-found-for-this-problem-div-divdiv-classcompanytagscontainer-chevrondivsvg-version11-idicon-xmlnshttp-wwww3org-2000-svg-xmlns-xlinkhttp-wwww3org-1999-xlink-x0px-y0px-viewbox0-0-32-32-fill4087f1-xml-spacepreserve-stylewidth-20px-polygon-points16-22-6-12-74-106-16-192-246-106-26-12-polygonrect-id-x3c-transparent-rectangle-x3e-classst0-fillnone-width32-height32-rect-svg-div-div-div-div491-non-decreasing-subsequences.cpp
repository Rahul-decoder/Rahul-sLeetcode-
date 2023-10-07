class Solution {
public:
    void fun(vector<int>&nums,set<vector<int>>&v,int n,int i,vector<int>&v1)
    {
        for(;i<n;i++)
        {
            if(v1.size()==0)
            {
                v1.push_back(nums[i]);
                fun(nums,v,n,i+1,v1);
                v1.pop_back();
            }
            else
            {
                if(v1[v1.size()-1]<=nums[i])
                {
                    v1.push_back(nums[i]);
                    fun(nums,v,n,i+1,v1);
                    v.insert(v1);
                    v1.pop_back();
                }
                else
                fun(nums,v,n,i+1,v1);
            }
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> v;
        vector<vector<int>> ans;
        int n=nums.size();
        vector<int> v1;
        fun(nums,v,n,0,v1);
        for(auto x:v)
            ans.push_back(x);
        return ans;
    }
};