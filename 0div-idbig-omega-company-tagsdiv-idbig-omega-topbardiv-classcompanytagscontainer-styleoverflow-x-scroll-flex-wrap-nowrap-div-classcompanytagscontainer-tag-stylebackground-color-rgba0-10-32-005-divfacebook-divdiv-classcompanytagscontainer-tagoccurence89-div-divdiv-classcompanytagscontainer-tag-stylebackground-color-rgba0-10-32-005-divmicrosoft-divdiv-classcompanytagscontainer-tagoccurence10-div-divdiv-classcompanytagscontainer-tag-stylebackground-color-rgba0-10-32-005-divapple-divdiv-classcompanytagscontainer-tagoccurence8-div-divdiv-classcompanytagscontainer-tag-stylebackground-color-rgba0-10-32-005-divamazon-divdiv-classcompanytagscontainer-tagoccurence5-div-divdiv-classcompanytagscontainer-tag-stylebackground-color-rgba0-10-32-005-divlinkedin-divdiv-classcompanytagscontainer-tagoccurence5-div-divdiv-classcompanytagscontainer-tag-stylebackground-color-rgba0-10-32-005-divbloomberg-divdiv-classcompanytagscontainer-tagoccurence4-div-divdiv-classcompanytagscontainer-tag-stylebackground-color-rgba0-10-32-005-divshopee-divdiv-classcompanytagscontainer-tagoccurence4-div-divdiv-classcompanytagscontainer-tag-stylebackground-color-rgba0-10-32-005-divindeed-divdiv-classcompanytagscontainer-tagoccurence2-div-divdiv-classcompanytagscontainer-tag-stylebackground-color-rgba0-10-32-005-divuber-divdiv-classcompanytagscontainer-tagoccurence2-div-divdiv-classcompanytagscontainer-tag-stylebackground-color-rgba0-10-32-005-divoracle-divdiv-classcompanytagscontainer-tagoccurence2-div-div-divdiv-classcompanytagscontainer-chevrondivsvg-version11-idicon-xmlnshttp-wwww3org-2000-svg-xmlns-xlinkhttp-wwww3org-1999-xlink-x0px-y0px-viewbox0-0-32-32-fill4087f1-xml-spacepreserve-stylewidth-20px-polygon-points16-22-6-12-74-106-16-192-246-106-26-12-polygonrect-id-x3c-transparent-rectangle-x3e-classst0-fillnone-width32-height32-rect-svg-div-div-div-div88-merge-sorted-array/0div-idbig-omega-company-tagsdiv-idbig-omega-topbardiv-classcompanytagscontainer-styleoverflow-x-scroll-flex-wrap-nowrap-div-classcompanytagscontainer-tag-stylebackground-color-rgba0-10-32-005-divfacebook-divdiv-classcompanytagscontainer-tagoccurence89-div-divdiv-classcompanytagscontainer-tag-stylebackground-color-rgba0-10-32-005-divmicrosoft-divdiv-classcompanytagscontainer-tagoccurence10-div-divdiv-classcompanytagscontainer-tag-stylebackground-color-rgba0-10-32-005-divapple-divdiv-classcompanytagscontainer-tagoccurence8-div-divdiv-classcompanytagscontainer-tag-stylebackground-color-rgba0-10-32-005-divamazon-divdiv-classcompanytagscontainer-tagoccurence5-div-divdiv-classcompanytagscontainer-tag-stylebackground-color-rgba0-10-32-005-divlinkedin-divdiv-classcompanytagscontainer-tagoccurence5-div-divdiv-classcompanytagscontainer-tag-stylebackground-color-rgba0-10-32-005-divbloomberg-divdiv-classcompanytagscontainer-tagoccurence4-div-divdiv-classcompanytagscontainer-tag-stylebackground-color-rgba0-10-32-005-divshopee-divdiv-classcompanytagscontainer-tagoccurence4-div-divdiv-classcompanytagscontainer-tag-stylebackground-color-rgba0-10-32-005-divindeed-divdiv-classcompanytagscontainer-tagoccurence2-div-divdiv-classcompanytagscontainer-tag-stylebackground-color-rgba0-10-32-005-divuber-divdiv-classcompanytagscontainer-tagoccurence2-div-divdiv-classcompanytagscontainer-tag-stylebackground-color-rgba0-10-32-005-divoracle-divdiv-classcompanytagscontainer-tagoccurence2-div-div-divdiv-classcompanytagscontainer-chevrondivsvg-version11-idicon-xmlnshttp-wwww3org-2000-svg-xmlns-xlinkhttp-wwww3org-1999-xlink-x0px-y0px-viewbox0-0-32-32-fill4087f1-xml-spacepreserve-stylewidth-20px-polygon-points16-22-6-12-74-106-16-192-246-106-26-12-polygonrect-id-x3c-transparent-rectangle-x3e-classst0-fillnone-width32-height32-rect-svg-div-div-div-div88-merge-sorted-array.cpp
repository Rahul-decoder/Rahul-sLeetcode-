class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        if(n>0)
        {
            while(i<m)
            {
                if(nums1[i]<=nums2[j])
                    i++;
                else
                {
                    swap(nums1[i],nums2[j]);
                    i++;
                    while(j<n-1&&nums2[j]>nums2[j+1])
                    {
                        swap(nums2[j],nums2[j+1]);
                        j++;
                    }
                    j=0;
                }
            }
            i=m;
            j=0;
            while(j<n)
            {
                nums1[i]=nums2[j];
            i++;j++;
            }
        }
    }
};