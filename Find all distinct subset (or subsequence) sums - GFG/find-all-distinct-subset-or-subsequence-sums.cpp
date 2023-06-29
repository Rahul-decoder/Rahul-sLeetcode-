//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
int fun(vector<int>&nums,int i,set<int>&s,int sum,vector<vector<int>>&dp)
{
    if(i>=nums.size())
    {
        s.insert(sum);
        return sum;
    }
    if(dp[i][sum]!=-1)
    return dp[i][sum];
    return dp[i][sum]=min(fun(nums,i+1,s,sum+nums[i],dp),fun(nums,i+1,s,sum,dp));
}
	vector<int> DistinctSum(vector<int>nums){
	    vector<vector<int>> dp(101,vector<int>(10001,-1));
	    vector<int> v;
	    set<int> s;
	    fun(nums,0,s,0,dp);
	    for(auto x:s)
	    v.push_back(x);
	    return v;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)cin >> nums[i];
		Solution obj;
		vector<int> ans = obj.DistinctSum(nums);
		for(auto i: ans)cout << i << " ";
		cout << "\n";
	}
	return 0;
}

// } Driver Code Ends