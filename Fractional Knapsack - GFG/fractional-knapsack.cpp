//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int w, Item arr[], int n)
    {
        vector<pair<double,int>> v;
        double sum=0;
        int i;
        for(i=0;i<n;i++)
        {
            v.push_back({double(arr[i].value)/arr[i].weight,arr[i].weight});
        }
        sort(v.begin(),v.end());
        for(i=n-1;i>=0;i--)
        {
            if(w>=v[i].second)
            {
            sum=sum+v[i].first*v[i].second;
            w=w-v[i].second;
            }
            else
            {
                sum=sum+v[i].first*w;
                break;
            }
        }
        return sum;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends