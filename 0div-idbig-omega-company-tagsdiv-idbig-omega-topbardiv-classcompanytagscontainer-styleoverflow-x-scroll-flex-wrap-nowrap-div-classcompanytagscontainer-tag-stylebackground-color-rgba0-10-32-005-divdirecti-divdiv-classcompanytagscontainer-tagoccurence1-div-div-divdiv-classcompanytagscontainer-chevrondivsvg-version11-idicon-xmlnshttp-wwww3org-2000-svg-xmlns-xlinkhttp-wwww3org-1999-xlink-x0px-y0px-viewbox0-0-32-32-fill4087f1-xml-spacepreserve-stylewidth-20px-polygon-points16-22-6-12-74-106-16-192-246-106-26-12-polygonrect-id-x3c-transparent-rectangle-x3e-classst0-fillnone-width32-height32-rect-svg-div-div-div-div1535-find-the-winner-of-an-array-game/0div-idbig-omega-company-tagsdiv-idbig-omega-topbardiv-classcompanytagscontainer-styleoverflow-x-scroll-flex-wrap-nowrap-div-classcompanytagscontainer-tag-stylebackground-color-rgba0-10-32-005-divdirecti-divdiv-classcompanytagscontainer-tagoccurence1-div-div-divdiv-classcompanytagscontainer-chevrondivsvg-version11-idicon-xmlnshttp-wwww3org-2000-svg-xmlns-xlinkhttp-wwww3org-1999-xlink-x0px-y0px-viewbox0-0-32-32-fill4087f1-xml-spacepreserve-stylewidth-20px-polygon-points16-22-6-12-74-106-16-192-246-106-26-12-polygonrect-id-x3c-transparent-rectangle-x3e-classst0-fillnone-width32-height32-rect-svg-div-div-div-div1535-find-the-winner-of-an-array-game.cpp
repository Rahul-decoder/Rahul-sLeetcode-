class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        stack<int> st;
        int i,n=arr.size(),maxi=INT_MIN;
        if(k>=n)
        {
            int m=*max_element(arr.begin(),arr.end());
            return m;
        }
        vector<int> v(n);
        v[n-1]=-1;
        st.push(n-1);
        for(i=n-2;i>=0;i--)
        {
            while(st.size()>0&&arr[st.top()]<arr[i])
                st.pop();
            if(st.size()==0)
            v[i]=n;
            else
            v[i]=st.top();
            st.push(i);
        }
        for(i=0;i<n;i++)
        {
           if(arr[i]>maxi)
           {
               if(i==0&&v[i]-i-1>=k)
               return arr[i];
               if(i!=0&&v[i]-i>=k)
               return arr[i];
           }
            maxi=max(maxi,arr[i]);
        }
        return maxi;
    }
};