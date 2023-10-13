class Solution {
public:
    int climbStairs(int n) {
        if(n==1)
        return n;
        vector<int> v(n,0);
        int i;
        v[0]=1;
        v[1]=2;
        for(i=2;i<n;i++)
        v[i]=v[i-1]+v[i-2];
        return v[n-1];
    }
};