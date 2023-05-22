class Solution {
    public:
   int solve(int N, vector<int> p){
       unordered_set<int> st;
       for(auto parent : p) 
        if(parent != -1 && parent != 0)
            st.insert(parent);
        return st.size();
    }
};
