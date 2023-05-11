//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	   int i=0,j=0;
	   while(arr[j]!=0)
	   j++;
	   while(j<n)
	   {
	       while(i<n&&arr[i]!=0)
	       i++;
	       while(j<n&&arr[j]==0)
	       j++;
	       if(i<n&&j<n&&arr[i]==0&&arr[j]!=0)
	       swap(arr[i],arr[j]);
	   }
	}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.pushZerosToEnd(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends