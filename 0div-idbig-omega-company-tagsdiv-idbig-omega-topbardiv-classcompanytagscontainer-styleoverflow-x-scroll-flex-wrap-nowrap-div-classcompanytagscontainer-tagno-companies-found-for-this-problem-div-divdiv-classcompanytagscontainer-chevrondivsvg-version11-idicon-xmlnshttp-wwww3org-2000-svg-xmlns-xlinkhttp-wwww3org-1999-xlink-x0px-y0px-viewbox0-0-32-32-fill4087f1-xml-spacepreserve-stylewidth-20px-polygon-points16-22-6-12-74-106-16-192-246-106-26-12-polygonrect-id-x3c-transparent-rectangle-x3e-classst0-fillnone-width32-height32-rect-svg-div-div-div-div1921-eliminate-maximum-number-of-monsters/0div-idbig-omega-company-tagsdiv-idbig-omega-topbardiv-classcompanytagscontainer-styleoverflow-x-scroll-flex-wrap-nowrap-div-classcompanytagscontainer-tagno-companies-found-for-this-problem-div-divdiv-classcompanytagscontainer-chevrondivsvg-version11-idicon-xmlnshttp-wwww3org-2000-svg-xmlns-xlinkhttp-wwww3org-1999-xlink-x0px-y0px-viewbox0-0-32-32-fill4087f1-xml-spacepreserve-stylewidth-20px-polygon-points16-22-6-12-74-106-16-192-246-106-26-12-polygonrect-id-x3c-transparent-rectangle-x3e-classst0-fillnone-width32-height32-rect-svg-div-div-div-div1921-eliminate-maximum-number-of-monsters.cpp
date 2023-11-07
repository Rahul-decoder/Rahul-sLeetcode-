class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int count=1,i,n=dist.size(),min=1;
        vector<float> v;
        for(i=0;i<n;i++)
        v.push_back((float)dist[i]/speed[i]);
        sort(v.begin(),v.end());
        for(i=1;i<n;i++)
        {
            if(v[i]>min)
            {
                count++;
                min++;
            }
            else
                break;
        }
        return count;
    }
};