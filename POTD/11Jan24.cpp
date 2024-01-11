class Solution {
  public:
   string removeKdigits(string S, int k) {
        stack<char>st;
        for(int i=0; i<S.size(); i++){
            while(!st.empty() and st.top()>S[i] and k){
                st.pop();
                k--;
            }
            st.push(S[i]);
        }
        if(st.empty())
            return "0";
        while(k--)
            st.pop();
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        int i=0;
        while(res[i]=='0')
            i++;
        if(i==res.size())
            return "0";
        return res.substr(i);
    }
};
