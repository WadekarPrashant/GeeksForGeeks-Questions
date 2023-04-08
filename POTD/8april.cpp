class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        // code here
        vector<int>res;
        for(int i=0 ; i<arr.size() ; i++){
            res.push_back(arr[i]);
        }
        int i=0;
        while(i<res.size()){
            if(i+1<res.size()){
                if((res[i]>=0 && res[i+1]<0) || (res[i]<0 && res[i+1]>=0)){
                    res.erase(res.begin()+i);
                    res.erase(res.begin()+i);
                    if(i!=0)i--;
                }
                else{
                    i=i+1;
                }
            }
            else{
                    i=i+1;
            }
        }
        return res;
        
    }
};