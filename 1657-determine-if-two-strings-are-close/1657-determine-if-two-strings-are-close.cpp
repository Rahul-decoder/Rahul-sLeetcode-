class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int i,n1=word1.size(),n2=word2.size();
        vector<int> v1,v2;
        if(n1!=n2)
            return false;
        else
        {
            map<char,int> m1,m2;
            for(i=0;i<n1;i++)
                m1[word1[i]]++;
            for(i=0;i<n2;i++)
                m2[word2[i]]++;
            
             for(auto x:m1)
             {
            char c;
            c=x.first;
            if(m2[c]==0)
                return false;
             }
            
            for(auto x:m1)
                v1.push_back(x.second);
            for(auto x:m2)
                v2.push_back(x.second);
            
        }
       
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        if(v1==v2)
            return true;
        return false;
    }
};