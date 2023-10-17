class Solution{
public:
    vector<vector<int>> transitiveClosure(int N, vector<vector<int>> graph){
        
        for(int self=0;self<N;self++) graph[self][self] = 1;
        
        for(int via=0;via<N;via++)
            for(int from=0;from<N;from++)
                for(int to=0;to<N;to++)
                    graph[from][to] |= (graph[from][via]&graph[via][to]);

        return graph;
    }
};