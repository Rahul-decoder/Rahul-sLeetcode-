class Solution {
public:
    int integerBreak(int n) {
        int i,j;
        vector<int> v(n+1,0);
        v[2]=1;
        for(i=3;i<=n;i++)
        {
            int maxi=0;
            for(j=1;j<=i/2;j++)
            maxi=max({maxi,j*(i-j),v[j]*v[i-j],j*v[i-j],v[j]*(i-j)});
            v[i]=maxi;
        }
        return v[n];
    }
};