//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    int i,n=str.size(),count1=0,count2=0;
    for(i=0;i<n;i++)
    {
        if(str[i]=='a')
        {
            while(i<n&&str[i]=='a')
            i++;
            count1++;
            i--;
        }
        else
        {
            while(i<n&&str[i]=='b')
            i++;
            count2++;
            i--;
        }
    }
    return min(count1,count2)+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends