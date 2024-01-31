class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int i,n=s.size();
        stack<int> st;
        string s1="";
        for(i=n-1;i>=0;i--)
        {
            if(s[i]==')')
                st.push(i);
            if(s[i]=='(')
            {
                if(st.size()>0)
                {
                    s[st.top()]=']';
                    s[i]='[';
                    st.pop();
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(s[i]=='[')
                s1.push_back('(');
            if(s[i]==']')
                s1.push_back(')');
            else if(s[i]>='a'&&s[i]<='z')
                s1.push_back(s[i]);
        }
        return s1;
    }
};