class Solution{   
public:
    string printMinNumberForPattern(string s){
        vector<int>v;
        int n=s.size();
        string ans;
        for(int i=0;i<=n;i++) v.push_back(i+1);
        for(int i=0;i<n;i++){
            int temp=i;
            while(temp!=n && s[temp]=='D'){
                temp++;
            }
            reverse(v.begin() + i, v.begin() + temp+1);
            if(temp!=i) i=temp-1;
        }
        for(int i=0;i<=n;i++) ans+=v[i]+'0';
        return ans;
    }
};
