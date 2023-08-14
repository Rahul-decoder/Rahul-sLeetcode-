//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
       vector<int> v1,v2;
       int a=0,i,p=0,q=0,n=nums.size();
       for(i=0;i<n;i++)
       a=a^nums[i];
       int rmsbm=a&-a;
       for(i=0;i<n;i++)
       {
           if(rmsbm&nums[i])
           v1.push_back(nums[i]);
           else
           v2.push_back(nums[i]);
       }
       for(i=0;i<v1.size();i++)
       p=p^v1[i];
       for(i=0;i<v2.size();i++)
       q=q^v2[i];
       if(p>q)
       return {q,p};
       return {p,q};
    }
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	vector<int> v(2 * n + 2);
    	for(int i = 0; i < 2 * n + 2; i++)
    		cin >> v[i];
    	Solution ob;
    	vector<int > ans = ob.singleNumber(v);
    	for(auto i: ans)
    		cout << i << " ";
    	cout << "\n";
    }
	return 0;
}
// } Driver Code Ends