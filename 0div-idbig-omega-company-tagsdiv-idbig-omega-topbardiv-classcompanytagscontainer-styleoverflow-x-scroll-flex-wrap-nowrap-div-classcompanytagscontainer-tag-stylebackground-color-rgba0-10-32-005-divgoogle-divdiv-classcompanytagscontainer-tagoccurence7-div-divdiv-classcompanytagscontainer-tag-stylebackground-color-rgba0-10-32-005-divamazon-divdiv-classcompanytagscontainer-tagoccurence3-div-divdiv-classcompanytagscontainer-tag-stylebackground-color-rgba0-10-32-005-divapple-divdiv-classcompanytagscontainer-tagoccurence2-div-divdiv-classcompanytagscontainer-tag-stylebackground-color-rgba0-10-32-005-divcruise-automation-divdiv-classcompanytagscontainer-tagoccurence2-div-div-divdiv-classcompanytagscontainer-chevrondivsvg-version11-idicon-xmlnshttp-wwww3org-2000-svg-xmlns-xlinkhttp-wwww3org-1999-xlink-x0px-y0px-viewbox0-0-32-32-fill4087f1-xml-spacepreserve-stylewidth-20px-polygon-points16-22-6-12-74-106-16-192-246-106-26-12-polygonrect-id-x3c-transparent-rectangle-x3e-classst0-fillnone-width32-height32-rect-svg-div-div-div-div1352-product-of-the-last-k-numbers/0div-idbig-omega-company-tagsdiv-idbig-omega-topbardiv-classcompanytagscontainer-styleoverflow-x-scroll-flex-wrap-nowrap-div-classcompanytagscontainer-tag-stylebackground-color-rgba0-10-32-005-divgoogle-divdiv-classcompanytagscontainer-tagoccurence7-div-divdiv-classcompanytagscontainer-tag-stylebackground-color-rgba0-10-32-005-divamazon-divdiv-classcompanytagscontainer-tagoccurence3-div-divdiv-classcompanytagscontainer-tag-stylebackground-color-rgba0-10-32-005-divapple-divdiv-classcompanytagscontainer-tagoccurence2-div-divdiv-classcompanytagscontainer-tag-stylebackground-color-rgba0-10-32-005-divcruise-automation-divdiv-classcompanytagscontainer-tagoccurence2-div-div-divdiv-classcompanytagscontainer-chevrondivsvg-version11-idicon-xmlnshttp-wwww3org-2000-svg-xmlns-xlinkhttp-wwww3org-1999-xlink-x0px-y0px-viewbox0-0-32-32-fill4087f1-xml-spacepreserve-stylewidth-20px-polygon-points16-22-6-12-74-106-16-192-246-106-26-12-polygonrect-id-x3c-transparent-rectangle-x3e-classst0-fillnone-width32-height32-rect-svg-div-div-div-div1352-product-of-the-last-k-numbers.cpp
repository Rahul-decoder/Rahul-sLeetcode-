class ProductOfNumbers {
public:
    ProductOfNumbers() {
        
    }
    vector<int> v;
    void add(int num) {
        v.push_back(num);
    }
    
    int getProduct(int k) {
        int mul=1,n=v.size();
        for(int i=n-1;i>=n-k;i--)
            mul*=v[i];
        return mul;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */