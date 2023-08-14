//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
       int a=0,i,p=0,q=0,n=nums.size();
       for(i=0;i<n;i++)
       a=a^nums[i];
       int rmsbm=a&-a;
       for(i=0;i<n;i++)
       {
           if(rmsbm&nums[i])
           p=p^nums[i];
           else
           q=q^nums[i];
       }
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