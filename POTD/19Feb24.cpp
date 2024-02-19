class Solution{
public:
    int minValue(string s, int k){
        map<char,int> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]]++;
        }
        priority_queue<int> pq;
        for(auto it=mp.begin();it!=mp.end();it++){
            pq.push((*it).second);
        }
        
        while(k--){
            int maxVal = pq.top();
            pq.pop();
            maxVal-=1;
            pq.push(maxVal);
        }
        
        int res=0;
        while(pq.empty()==false){
            res += pow(pq.top(),2);
            pq.pop();
        }
        return res;
    }
};
