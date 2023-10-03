class Solution {
public:
    int numSub(string s) {
        long long int count=0,i,n=s.size(),sum=0;
        for(i=0;i<n;i++)
        {
           if(s[i]=='1')
               count++;
            else
            {
                sum=(sum+count*(count+1)/2)%1000000007;
                count=0;
            }
        }
        sum=(sum+count*(count+1)/2)%1000000007;
        return sum;
    }
};