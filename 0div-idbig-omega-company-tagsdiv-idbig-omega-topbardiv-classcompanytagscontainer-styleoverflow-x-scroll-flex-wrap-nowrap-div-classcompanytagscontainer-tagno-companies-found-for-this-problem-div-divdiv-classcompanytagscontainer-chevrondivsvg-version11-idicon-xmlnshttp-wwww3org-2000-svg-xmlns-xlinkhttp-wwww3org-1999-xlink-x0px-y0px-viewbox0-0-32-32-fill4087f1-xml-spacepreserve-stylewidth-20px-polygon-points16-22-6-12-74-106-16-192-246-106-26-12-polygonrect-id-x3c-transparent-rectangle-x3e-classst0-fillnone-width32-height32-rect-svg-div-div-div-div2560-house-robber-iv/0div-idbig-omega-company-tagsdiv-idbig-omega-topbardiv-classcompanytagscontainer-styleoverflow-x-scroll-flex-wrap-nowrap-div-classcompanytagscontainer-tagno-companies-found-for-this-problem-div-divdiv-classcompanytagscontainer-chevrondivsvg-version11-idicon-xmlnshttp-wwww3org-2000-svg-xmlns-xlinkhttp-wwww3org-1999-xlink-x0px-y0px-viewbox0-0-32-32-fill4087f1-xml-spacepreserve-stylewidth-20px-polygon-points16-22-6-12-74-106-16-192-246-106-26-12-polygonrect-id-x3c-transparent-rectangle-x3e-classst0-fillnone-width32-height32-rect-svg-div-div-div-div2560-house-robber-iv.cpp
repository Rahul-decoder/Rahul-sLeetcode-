class Solution {
public:
    int minCapability(vector<int>& nums, int k) {
        int l=*min_element(nums.begin(),nums.end());
        int h=*max_element(nums.begin(),nums.end());
        int i,n=nums.size();
        while(l<=h)
        {
            int mid=(l+h)/2,maxi=0,count=0;
            for(i=0;i<n;i++)
            {
                if(nums[i]<=mid)
                {
                    maxi=max(maxi,nums[i]);
                    count++;
                    i++;
                }
                if(count==k)
                    break;
            }
            if(count==k&&maxi<=mid)
                h=mid-1;
            else
                l=mid+1;
        }
        return l;
    }
};