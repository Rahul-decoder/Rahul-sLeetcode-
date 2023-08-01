//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
            int a[n],b[n],i,maxi=arr[0];
            a[0]=arr[0];
            long long int count=0;
            for(i=1;i<n;i++)
            {
                a[i]=max(maxi,arr[i]);
                maxi=max(maxi,arr[i]);
            }
            maxi=arr[n-1],b[n-1]=maxi;
            for(i=n-2;i>=0;i--)
            {
                b[i]=max(maxi,arr[i]);
                maxi=max(maxi,arr[i]);
            }
            for(i=1;i<n-1;i++)
            count+=min(a[i],b[i])-arr[i];
            return count;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends