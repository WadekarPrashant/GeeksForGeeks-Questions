class Solution{
    public:
    string colName (long long int n)
    {
        string ans = "";
        while (n) {
            n--;
            
            char ch = 'A' + n % 26;
            ans += ch;
            n /= 26;
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
