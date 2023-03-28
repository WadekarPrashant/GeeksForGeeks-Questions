class Solution{
    public:
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    
    long long find (long  n, long k){
        if(k == 0) return 0;
        long long ans = 0;
        long long  low = 0 , high = n-1;
        long long mid_val = -1;
        long long mid;
        while(low<=high){
            mid = (low+high)/2;
            mid_val = shop.get(mid);
            if(mid_val == k){
                k = 0;
                ans++;
                return ans;
            }
            else if(mid_val < k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(mid_val == -1) return 0;
        if(mid_val > k && mid > 0){
            int cur = shop.get(mid-1);
            ans += k/cur;
            k -= (k/cur)*cur;
        }
        else if(mid_val > k && mid == 0) return 0;
        else if(mid_val < k){
            ans += k/mid_val;
            k -= (k/mid_val)*mid_val;
        }
        return ans + find(mid,k);
    }
};