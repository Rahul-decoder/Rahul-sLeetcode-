class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,h=height.size()-1;
        int mul=1,maxi=0;
        while(l<h)
        {
            mul=min(height[l],height[h])*(h-l);
            maxi=max(maxi,mul);
            if(height[l]<height[h])
                l++;
            else
                h--;
        }
        return maxi;
    }
};