class Solution{
public:
    vector<int> recamanSequence(int n){
        vector<int> sqn;
        set<int> st;
        sqn.push_back(0);
        st.insert(0);
        
        for(int i=1; i<=n; i++){
            int val= sqn[i-1]-i;
            if(val < 0){
                 val=sqn[i-1]+i;
                sqn.push_back(val);
                st.insert(val);
            }else{
                if(st.find(val)!= st.end()){
                    val=sqn[i-1]+i;
                }
                sqn.push_back(val);
                st.insert(val);
            }
        }
        return sqn;
    }
};
