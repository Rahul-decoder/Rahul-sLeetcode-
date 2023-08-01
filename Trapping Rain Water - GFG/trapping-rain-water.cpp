//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        long long int count=0;
        int i,lm=arr[0],rm=arr[n-1],l=0,r=n-1;
        while(l<=r)
        {
            if(arr[l]<=arr[r])
            {
                lm=max(lm,arr[l]);
                count+=lm-arr[l];
                l++;
            }
            else
            {
                rm=max(rm,arr[r]);
                count+=rm-arr[r];
                r--;
            }
        }
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