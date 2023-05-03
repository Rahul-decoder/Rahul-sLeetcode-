//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    vector<string> v1{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    //Function to find list of all words possible by pressing given numbers.
    void fun(int a[],int n, vector<string> &v,int i,string s)
    {
        if(i==n)
        {
            v.push_back(s);
            return;
        }
        string s1=v1[a[i]];
        for(int j=0;j<s1.size();j++)
        fun(a,n,v,i+1,s+s1[j]);
    }
    vector<string> possibleWords(int a[], int n)
    {
        vector<string> v;
        string s="";
        fun(a,n,v,0,s);
        return v;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends