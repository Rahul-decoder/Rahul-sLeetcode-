class Solution {
public:
    bool canJump(vector<int>& nums) {
        int p=0,i,n=nums.size();
        for(i=0;i<n;i++)
        {
            if(i<=p)
            p=max(p,i+nums[i]);
            else
                return 0;
        }
        if(p>=n-1)
        return 1;
        return 0;
    }
};