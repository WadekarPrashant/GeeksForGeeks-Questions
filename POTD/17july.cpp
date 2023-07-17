class Solution {
    public:
        string FirstNonRepeating(string A){
            unordered_map<char,int> mp;
            queue<char> q;
            string ans="";
            
            for(char c: A){
                //1 increment the freq
                mp[c]++;
                if(mp[c]==1){
                    q.push(c);
                }
                //2 remove repeating element
                while(!q.empty() && mp[q.front()]>1){
                    q.pop();
                }
                //3 store the element
                if(q.empty()){
                    ans+='#';
                }else{
                    ans+=q.front();
                }
            }
            return ans;
        }
};
