class Solution {
public:
    int countHomogenous(string s) {
       long long int i,n=s.size(),sum=0,count=1;
        char ch=s[0];
        for(i=1;i<n;i++)
        {
            if(s[i]==ch)
            count++;
            else
            {
                sum=(sum+count*(count+1)/2)%1000000007;
                count=1;
                ch=s[i];
            }
        }
        sum=(sum+count*(count+1)/2)%1000000007;
        return sum;
    }
};