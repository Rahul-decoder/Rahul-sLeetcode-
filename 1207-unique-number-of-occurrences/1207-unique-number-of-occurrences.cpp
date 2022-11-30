class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        unordered_set<int> s;
        int i=0,n=arr.size();
        for(i=0;i<n;i++)
            m[arr[i]]++;
        for(auto x:m)
          s.insert(x.second);
        if(s.size()==m.size())
            return true;
        return false;
    }
};