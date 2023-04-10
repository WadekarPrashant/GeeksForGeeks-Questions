class Solution {
  public:
    int maxIntersections(vector<vector<int>> lines, int N) {
        map<int, int> m;
        for(auto i : lines) m[i[0]]++, m[i[1] + 1]--;
        int ans = 0, s = 0;
        for(auto i : m) {
            s += i.second;
            ans = max(ans, s);
        }
        return ans;
    }
};