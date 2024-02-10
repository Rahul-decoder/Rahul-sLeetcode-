class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j=0,n=nums.size(),count=0,count1=0;
        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
                count++;
            else if(nums[i]!=nums[i-1])
                count=0;
            if(count>1)
            {
                int r=nums[i];
                while(i<n&&nums[i]==r)
                {
                    nums[i]=10007;
                    count1++;
                    i++;
                }
                count=0;
            }
        }
        i=0;
        while(j<n)
        {
           while(i<n&&nums[i]!=10007)
               i++;
            if(i<n&&nums[i]==10007&&nums[j]!=10007&&j>i)
            swap(nums[i],nums[j]);
            j++;
                
        }
        return n-count1;
    }
};