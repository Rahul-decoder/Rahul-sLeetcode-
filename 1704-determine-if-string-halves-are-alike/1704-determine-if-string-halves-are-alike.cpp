class Solution {
public:
    bool halvesAreAlike(string s) {
        int count1=0,count2=0;
         int low=0,high=s.size()-1;
        while(low<high)
        {
                            if(s[low]=='a'||s[low]=='e'||s[low]=='i'||s[low]=='o'||s[low]=='u'||s[low]=='A'||s[low]=='E'||s[low]=='I'||s[low]=='U'||s[low]=='O')
        count1++;
            
            if(s[high]=='a'||s[high]=='e'||s[high]=='i'||s[high]=='o'||s[high]=='u'||s[high]=='A'||s[high]=='E'||s[high]=='I'||s[high]=='U'||s[high]=='O')
        count2++;
            low++;
            high--;
        }
        if(count1==count2)
            return true;
        return false;
    }
};