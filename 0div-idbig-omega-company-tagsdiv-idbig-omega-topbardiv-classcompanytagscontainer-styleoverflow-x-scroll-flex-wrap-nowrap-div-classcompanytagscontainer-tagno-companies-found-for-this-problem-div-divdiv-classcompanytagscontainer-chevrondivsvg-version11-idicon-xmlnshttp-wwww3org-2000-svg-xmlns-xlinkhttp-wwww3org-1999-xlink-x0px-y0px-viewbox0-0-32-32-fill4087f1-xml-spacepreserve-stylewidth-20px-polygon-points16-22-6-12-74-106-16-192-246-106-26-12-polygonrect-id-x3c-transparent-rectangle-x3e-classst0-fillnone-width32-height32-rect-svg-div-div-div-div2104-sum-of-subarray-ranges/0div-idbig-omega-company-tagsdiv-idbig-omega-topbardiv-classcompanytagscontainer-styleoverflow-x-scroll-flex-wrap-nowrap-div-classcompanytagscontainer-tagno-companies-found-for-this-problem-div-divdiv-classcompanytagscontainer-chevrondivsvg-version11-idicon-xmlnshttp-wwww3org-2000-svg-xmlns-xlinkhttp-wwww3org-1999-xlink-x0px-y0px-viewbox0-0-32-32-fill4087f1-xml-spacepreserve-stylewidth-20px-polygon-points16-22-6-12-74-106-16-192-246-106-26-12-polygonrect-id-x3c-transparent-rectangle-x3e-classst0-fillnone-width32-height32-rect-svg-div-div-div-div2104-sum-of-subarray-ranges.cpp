class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long int sum=0,j,i,n=nums.size();
        for(i=0;i<n;i++)
        {
            int maxi=INT_MIN,mini=INT_MAX;
            for(j=i;j<n;j++)
            {
                mini=min(mini,nums[j]);
                maxi=max(maxi,nums[j]);
                sum+=maxi-mini;
            }
        }
        return sum;
    }
};