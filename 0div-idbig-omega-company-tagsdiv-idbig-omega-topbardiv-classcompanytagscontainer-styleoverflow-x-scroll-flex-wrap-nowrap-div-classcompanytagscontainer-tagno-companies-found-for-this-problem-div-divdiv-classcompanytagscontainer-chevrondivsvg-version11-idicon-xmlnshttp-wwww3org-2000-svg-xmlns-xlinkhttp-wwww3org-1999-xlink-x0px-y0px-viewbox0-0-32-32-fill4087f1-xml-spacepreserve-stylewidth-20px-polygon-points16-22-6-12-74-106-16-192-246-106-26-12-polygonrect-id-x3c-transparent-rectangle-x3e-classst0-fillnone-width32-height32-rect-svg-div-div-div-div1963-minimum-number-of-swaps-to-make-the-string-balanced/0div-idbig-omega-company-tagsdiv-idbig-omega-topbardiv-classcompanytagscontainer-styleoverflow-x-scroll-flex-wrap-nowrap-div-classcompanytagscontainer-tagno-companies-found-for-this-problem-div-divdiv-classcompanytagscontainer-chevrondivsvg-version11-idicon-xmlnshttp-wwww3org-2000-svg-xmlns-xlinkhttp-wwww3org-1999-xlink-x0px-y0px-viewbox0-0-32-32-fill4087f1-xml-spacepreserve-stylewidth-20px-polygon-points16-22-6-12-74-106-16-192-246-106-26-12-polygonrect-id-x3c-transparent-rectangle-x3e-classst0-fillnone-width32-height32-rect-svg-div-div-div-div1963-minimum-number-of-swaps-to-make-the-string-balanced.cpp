class Solution {
public:
    int minSwaps(string s) {
        int i,n=s.size();
        stack<int> st;
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==']')
                st.push(i);
            else
            {
                if(st.size()>0)
                st.pop();
            }
        }
        return ceil(st.size()/2.0);
    }
};