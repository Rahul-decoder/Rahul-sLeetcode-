class Solution {
public:
    int trapRainWater(vector<vector<int>>& h) {
        int i,j,n=h.size(),m=h[0].size(),sum=0;
        vector<vector<int>> v(n,vector<int>(m,0));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,                                          greater<pair<int,pair<int,int>>>> pq;
        for(i=0;i<n;i++)
        {
            pq.push({h[i][0],{i,0}});
            v[i][0]=1;
            pq.push({h[i][m-1],{i,m-1}});
            v[i][m-1]=1;
        }
        for(i=0;i<m;i++)
        {
            pq.push({h[0][i],{0,i}});
            v[0][i]=1;
            pq.push({h[n-1][i],{n-1,i}});
            v[n-1][i]=1;
        }
        while(!pq.empty())
        {
            pair<int,pair<int,int>> temp=pq.top();
            pq.pop();
            int a=temp.first,b=temp.second.first,c=temp.second.second;
            if(b+1<n&&v[b+1][c]==0)
            {
                if(h[b+1][c]<a)
                sum+=a-h[b+1][c];
                int d=max(a,h[b+1][c]);
                pq.push({d,{b+1,c}});
                v[b+1][c]=1;
            }
            if(c+1<m&&v[b][c+1]==0)
            {
                if(h[b][c+1]<a)
                sum+=a-h[b][c+1];
                int d=max(a,h[b][c+1]);
                pq.push({d,{b,c+1}});
                v[b][c+1]=1;
            }
            if(c-1>=0&&v[b][c-1]==0)
            {
                if(h[b][c-1]<a)
                sum+=a-h[b][c-1];
                int d=max(a,h[b][c-1]);
                pq.push({d,{b,c-1}});
                v[b][c-1]=1;
            }
            if(b-1>=0&&v[b-1][c]==0)
            {
                if(h[b-1][c]<a)
                sum+=a-h[b-1][c];
                int d=max(a,h[b-1][c]);
                pq.push({d,{b-1,c}});
                v[b-1][c]=1;
            }
        }
        return sum;
    }
};