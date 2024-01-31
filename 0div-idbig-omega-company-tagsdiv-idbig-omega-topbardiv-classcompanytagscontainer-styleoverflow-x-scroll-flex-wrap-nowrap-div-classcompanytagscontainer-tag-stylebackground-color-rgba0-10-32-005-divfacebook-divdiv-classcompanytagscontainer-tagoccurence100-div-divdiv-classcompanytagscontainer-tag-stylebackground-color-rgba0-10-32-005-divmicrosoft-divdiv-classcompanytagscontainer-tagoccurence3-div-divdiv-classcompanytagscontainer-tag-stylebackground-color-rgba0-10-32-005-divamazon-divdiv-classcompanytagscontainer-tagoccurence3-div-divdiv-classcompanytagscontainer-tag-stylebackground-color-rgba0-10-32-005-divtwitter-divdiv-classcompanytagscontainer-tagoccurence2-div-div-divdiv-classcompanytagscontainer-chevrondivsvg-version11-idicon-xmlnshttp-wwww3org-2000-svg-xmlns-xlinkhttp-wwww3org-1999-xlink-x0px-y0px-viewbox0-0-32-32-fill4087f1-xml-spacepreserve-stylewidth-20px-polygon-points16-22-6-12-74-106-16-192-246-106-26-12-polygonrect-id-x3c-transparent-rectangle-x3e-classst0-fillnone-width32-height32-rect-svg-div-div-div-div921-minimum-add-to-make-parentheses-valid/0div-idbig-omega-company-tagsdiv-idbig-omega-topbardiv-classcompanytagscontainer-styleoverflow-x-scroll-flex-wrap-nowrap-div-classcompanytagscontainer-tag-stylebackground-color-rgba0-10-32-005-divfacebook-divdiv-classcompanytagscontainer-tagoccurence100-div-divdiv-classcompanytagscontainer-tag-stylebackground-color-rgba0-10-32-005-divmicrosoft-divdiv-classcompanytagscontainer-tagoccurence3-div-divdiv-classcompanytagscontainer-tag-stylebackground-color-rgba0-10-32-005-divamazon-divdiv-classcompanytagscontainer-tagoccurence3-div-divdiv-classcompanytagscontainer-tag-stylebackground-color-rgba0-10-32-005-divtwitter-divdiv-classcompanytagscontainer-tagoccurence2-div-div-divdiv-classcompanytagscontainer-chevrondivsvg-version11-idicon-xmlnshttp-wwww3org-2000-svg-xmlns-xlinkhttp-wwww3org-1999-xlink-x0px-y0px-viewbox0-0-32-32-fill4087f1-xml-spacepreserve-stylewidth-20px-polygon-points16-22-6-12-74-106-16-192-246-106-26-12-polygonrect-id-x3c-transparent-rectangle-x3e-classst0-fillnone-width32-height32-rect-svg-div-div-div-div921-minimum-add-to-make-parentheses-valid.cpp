class Solution {
public:
    int minAddToMakeValid(string s) {
        int i,n=s.size(),count=0;
        stack<int> st;
        for(i=n-1;i>=0;i--)
        {
             if(s[i]==')')
                 st.push(i);
             else
             {
                 if(st.size()>0)
                 {
                     st.pop();
                     count+=2;
                 }
             }
        }
        return n-count;
    }
};