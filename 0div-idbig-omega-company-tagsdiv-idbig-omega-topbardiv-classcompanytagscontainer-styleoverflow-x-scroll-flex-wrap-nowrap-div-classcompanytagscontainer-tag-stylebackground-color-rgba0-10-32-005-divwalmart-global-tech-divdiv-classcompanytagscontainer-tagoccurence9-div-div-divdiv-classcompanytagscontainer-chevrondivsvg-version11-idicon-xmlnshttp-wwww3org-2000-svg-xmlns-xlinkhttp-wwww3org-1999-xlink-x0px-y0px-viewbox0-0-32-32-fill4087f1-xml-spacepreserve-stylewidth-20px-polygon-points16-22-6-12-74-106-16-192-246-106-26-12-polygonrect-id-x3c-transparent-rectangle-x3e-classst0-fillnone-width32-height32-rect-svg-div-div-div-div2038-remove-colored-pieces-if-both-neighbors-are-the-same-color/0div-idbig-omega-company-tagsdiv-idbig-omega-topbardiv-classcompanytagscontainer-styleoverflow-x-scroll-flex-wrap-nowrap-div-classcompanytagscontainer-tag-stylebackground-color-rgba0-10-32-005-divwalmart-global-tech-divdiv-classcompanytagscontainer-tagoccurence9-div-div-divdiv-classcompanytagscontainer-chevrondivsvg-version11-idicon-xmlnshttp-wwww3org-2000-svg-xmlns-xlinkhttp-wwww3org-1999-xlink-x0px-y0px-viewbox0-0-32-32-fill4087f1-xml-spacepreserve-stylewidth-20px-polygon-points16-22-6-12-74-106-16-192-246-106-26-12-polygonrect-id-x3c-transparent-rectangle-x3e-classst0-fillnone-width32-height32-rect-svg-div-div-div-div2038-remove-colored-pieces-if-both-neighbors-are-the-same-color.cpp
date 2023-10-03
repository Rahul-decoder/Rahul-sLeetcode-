class Solution {
public:
    bool winnerOfGame(string colors) {
        int i,n=colors.size(),a=0,b=0,count=0,count1=0;
        for(i=0;i<n;i++)
        {
            if(colors[i]=='A')
            {
                count++;
                if(count1>2)
                b+=count1-2;
                count1=0;
            }
            else
            {
                count1++;
                if(count>2)
                a+=count-2;
                count=0;
            }
        }
        if(count1>2)
        b+=count1-2;
        if(count>2)
        a+=count-2;
        if(a>b)
        return 1;
        return 0;
    }
};