class Solution {
  public:
    vector<int> maxCombinations(int N, int k, vector<int> &A, vector<int> &B) {
        vector<int>ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        int i=A.size()-1,j=B.size()-1;
        int sum = A[i]+B[j];
        pq.push({sum,{i,j}});
        map<pair<int,int>,int>vis;
        while(!pq.empty()){
            int x = pq.top().second.first;
            int y = pq.top().second.second;
            ans.push_back(A[x]+B[y]);
            // cout<<x<<" "<<y<<" "<<pq.top().first<<endl;
            if(ans.size()==k)break;
            pq.pop();
            if(x>0){
                if(vis[{x-1,y}]==0){
                pq.push({A[x-1]+B[y],{x-1,y}});vis[{x-1,y}]=1;}
            }
            if(y>0){
                if(vis[{x,y-1}]==0){
                pq.push({A[x]+B[y-1],{x,y-1}});vis[{x,y-1}]=1;}
            }
        }
        return ans;
    }
};
