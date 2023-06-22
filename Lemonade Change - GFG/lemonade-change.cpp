//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int n, vector<int> &a) {
       int i,a5=0,a10=0;
       for(i=0;i<n;i++)
       {
           if(a[i]==5)
           a5++;
           else if(a[i]==10)
           {
               if(a5>0)
               {
                   a5--;
                   a10++;
               }
               else
               return 0;
           }
           else if(a[i]==20)
           {
               if(a5>0&&a10>0)
               {
                   a5--;
                   a10--;
               }
               else if(a5>2)
                   a5-=3;
               else
               return 0;
           }
       }
       return 1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends