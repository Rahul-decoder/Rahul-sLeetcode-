class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int i,n=arr.size();
        unordered_map<int,int> m;
        for(i=0;i<n;i++)
        {
            int r=(arr[i]%k+k)%k;
            m[r]++;
        }
        if(m[0]%2!=0)
            return 0;
        for(i=1;i<k;i++)
        {
            if(m[i]!=m[k-i])
                return 0;
        }
        return 1;
    }
};