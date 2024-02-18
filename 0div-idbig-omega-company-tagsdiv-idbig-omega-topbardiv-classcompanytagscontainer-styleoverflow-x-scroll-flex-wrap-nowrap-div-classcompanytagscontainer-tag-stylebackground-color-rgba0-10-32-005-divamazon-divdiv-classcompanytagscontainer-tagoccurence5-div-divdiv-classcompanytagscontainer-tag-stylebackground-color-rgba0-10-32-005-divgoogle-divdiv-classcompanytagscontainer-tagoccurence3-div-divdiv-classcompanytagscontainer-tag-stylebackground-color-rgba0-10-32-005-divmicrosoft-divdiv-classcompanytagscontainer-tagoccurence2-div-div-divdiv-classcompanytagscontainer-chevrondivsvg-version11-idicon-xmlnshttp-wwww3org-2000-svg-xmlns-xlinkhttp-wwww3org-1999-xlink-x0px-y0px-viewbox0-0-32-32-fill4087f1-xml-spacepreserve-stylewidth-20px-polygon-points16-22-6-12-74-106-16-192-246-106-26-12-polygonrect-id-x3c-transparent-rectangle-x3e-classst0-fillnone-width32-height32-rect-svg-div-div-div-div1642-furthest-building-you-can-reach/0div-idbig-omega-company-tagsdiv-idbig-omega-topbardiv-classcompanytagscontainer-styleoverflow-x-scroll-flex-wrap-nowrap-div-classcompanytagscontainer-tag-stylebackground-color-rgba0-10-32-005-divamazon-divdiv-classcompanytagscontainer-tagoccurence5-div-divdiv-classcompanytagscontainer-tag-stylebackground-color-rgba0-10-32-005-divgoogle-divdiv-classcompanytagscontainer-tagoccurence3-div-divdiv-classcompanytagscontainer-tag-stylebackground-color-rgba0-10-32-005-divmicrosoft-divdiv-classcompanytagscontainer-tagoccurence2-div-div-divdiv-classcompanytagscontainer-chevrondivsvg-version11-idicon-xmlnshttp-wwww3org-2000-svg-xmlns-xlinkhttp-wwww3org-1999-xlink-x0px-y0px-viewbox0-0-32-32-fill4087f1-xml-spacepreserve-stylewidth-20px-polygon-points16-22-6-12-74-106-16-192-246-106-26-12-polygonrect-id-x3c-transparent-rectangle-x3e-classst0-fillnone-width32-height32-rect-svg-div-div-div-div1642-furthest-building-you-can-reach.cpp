class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        int i,n=heights.size();
        priority_queue<int> pq;
        for(i=0;i<n-1;i++)
        {
            if((heights[i+1]-heights[i])>bricks&&ladders<=0)
                break;
            if(heights[i]<heights[i+1])
            {
                if(bricks>=(heights[i+1]-heights[i]))
                {
                    bricks-=(heights[i+1]-heights[i]);
                    pq.push(heights[i+1]-heights[i]);
                }
                else
                {
                    if(pq.size()>0&&pq.top()>heights[i+1]-heights[i]&&ladders>0)
                    {
                        bricks+=pq.top();
                        bricks-=(heights[i+1]-heights[i]);
                        pq.pop();
                        pq.push(heights[i+1]-heights[i]);
                    }
                    ladders--;
                }
                
            }
        }
        return i;
    }
};