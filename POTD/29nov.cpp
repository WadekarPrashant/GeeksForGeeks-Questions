class Solution {
public:
    int isEulerCircuit(int V, vector<int>adj[]){
        int evens =0;
        int odds =0;
        for(int i =0;i< V;i++){
            if(adj[i].size() & 1) odds++;
            else evens++;
        }
        if(evens == V) return 2;
        else if (odds <= 2) return 1;
        else return 0;
    }
};
