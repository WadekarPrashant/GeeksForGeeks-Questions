class Solution {
  public:
    int smallestSubstring(string s) {
        // Code here
        int l0 = -1, l1 = -1, l2 = -1;
        int ans = 1e6;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') l0 = i;
            else if (s[i]=='1') l1=i;
            else l2 = i;
            
            if(l1==-1 || l2==-1 || l0==-1) continue;
            ans = min(ans, max(max(l0, l1), l2) - min(min(l0, l1), l2) + 1);
        }
        
        return (ans==1e6) ? -1: ans;
    }
};
