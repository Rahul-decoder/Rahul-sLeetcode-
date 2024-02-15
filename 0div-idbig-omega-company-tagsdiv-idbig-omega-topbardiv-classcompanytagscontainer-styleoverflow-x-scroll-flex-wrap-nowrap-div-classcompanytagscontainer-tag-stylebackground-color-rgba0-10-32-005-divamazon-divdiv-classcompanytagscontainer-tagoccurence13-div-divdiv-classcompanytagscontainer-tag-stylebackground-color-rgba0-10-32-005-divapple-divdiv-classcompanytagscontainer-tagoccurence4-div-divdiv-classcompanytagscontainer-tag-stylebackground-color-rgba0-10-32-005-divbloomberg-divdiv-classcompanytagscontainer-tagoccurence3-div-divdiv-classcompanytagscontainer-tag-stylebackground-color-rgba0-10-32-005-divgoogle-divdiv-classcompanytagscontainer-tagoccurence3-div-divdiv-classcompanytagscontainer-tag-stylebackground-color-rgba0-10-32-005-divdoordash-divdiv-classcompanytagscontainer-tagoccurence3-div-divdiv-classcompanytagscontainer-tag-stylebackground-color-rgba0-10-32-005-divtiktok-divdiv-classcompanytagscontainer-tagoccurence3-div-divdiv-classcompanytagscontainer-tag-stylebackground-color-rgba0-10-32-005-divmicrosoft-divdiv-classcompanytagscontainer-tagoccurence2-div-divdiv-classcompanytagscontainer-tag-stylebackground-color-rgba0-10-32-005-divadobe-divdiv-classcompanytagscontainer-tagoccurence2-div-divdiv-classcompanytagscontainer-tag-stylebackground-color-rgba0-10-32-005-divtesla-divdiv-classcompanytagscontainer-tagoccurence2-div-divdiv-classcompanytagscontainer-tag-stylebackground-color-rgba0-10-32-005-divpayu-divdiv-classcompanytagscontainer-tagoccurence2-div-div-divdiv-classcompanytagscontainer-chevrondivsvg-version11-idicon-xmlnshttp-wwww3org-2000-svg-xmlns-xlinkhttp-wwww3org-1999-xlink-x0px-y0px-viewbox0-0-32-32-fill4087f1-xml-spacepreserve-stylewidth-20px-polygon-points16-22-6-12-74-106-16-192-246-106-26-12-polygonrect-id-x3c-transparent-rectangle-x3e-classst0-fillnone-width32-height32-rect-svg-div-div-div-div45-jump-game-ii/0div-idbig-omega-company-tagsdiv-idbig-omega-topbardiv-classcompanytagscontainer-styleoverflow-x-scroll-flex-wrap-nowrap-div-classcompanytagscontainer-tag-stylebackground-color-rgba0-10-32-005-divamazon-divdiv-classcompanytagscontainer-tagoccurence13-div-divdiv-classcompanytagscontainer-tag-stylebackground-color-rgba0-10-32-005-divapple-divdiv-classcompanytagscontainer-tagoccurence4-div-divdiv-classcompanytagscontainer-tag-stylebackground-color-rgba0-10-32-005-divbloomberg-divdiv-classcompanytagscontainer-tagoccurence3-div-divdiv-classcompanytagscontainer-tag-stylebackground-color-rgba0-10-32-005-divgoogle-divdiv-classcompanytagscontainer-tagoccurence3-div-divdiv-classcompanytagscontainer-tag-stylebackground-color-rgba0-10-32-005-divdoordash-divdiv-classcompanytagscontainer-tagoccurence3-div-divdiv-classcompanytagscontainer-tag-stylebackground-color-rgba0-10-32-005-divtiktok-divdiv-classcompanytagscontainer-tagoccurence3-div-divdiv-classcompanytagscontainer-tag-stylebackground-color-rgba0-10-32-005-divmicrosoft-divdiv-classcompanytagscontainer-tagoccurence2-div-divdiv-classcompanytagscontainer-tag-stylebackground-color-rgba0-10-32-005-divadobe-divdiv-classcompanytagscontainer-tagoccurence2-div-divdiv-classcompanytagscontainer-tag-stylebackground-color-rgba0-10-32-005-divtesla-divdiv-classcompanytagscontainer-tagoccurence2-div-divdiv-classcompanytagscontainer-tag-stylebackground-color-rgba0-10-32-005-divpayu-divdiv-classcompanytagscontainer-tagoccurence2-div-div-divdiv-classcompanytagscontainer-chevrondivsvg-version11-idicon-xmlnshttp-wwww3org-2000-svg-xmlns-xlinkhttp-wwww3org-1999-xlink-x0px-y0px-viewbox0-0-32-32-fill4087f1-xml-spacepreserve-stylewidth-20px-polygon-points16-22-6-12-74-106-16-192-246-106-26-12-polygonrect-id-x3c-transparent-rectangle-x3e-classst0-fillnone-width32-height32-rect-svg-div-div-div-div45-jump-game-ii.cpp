class Solution {
public:
    int jump(vector<int>& nums) {
        int i,n=nums.size(),count=0,j;
        vector<int> v(n);
        for(i=0;i<n;i++)
        v[i]=i+nums[i];
        for(i=0;i<n;i++)
        {
            int p=i,maxi=v[i];
            for(j=i+1;j<=i+nums[i]&&j<n;j++)
            {
                if(nums[j]!=0)
                {
                    if(maxi<v[j]&&maxi<n-1)
                    {
                        p=j;
                        maxi=v[j];
                    }
                }
            }
            if(p!=i)
            {
                count++;
                i=p-1;
            }
           else
           {   if(p!=n-1)
               count++;
               break;
           }
        }
        return count;
    }
};