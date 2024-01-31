class StockSpanner {
public:
    StockSpanner() {
        
    }
    vector<int> v;
    int next(int price) {
        v.push_back(price);
        int i,n=v.size(),count=0;
        for(i=n-1;i>=0;i--)
        {
            if(v[i]<=price)
                count++;
            else
                break;
        }
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */