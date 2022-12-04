//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

 
class Solution{
    public:
    string rearrange (string s, int n)
    {
        string s1="";
        int i,a[26]={0},j=1;
        for(i=0;i<n;i++)
            a[s[i]-'a']=a[s[i]-'a']+1;
        int p=a[0]+a[4]+a[8]+a[14]+a[20],sum=0,flag=0;
        for(i=0;i<26;i++)
        {
            if(i!=0&&i!=4&&i!=8&&i!=14&&i!=20)
            sum=sum+a[i];
        }
        if(abs(sum-p)>1)
        return "-1";
        else
        {
                         while(a[j]<=0)
                         {
                           j++;
                           if(j==4||j==8||j==14||j==20)
                           j++;
                         }
                 if(sum==p)
                    {
                         if(((j+'a')<'e'&&a[0]==0)||((j+'a')<'i'&&a[4]==0&&a[0]==0)||((j+'a')<'o'&&a[8]==0&&a[4]==0&&a[0]==0)||((j+'a')<'u'&&a[14]==0&&a[0]==0&&a[4]==0&&a[8]==0))
                         {
                             s1.push_back((j+'a'));
                             a[j]--;
                         }
                    }
                    if(sum>p)
                     {
                         s1.push_back((j+'a'));
                         a[j]--;
                     }
                while(s1.size()<n)
                {
                    if(a[0]>0)
                    {
                    s1.push_back('a');
                    a[0]--;
                    }
                    else if(a[4]>0)
                    {
                    s1.push_back('e');
                    a[4]--;
                    }
                    else if(a[8]>0)
                    {
                        s1.push_back('i');
                        a[8]--;
                    }
                    else if(a[14]>0)
                    {
                        s1.push_back('o');
                        a[14]--;
                    }
                    else if(a[20]>0)
                    {
                        s1.push_back('u');
                        a[20]--;
                    }
                    if(s1.size()==n)
                    break;
                    while(a[j]<=0)
                    {
                        j++;
                        if(j==4||j==8||j==14||j==20)
                        j++;
                    }
                    s1.push_back((j+'a'));
                    a[j]--;
                }
        }
        return s1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t; cin >> t;
	while (t--)
	{
		int n; cin >> n;
		string s; cin >> s;
		Solution ob;
		cout << ob.rearrange (s, n) << endl;
	}
}
// Contributed By: Pranay Bansal

// } Driver Code Ends