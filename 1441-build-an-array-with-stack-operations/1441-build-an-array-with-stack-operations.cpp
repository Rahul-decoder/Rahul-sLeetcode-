class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> v;
        stack<int> st;
        int i=0,j=1,n1=target.size();
        while(i<n1)
        {
            st.push(j);
            v.push_back("Push");
            if(st.top()==target[i])
                i++;
            else
            {
                v.push_back("Pop");
                st.pop();
            }
            j++;
        }
        return v;
    }
};