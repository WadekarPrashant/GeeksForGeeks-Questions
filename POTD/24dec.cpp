class Solution {
public:
    int buyMaximumProducts(int n, int k, int price[]){
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(int i = 0; i < n; i++) pq.push({price[i], i+1});
        int ans = 0;
        while(!pq.empty()){
            pair<int, int> p = pq.top();
            pq.pop();
            int t = k / p.first;
            if(t == 0) break;
            int cnt = min(p.second, t);
            k -= p.first * cnt;
            ans += cnt;
        }
        return ans;
    }
};
