class Solution{
public:
    int minimumTime(int N,int cur,vector<int> &pos,vector<int> &time){
        vector<int> a  ;
        
        for(int i=0 ;i<N ;i++){
            if(pos[i]>=cur){
                a.push_back(pos[i] - cur);
            }else {
                a.push_back(cur - pos[i]);
            }
        }
        
        for(int i = 0 ; i<N ;i++){
            a[i]*= time[i];
        }
        int z = a[0] ;
        for(int i=0 ; i<N ;i++){
            z = min(z , a[i]);
        }
        return z;
    }
};