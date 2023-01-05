class Solution {
  public:
    int removeStudents(int vec[], int N) {
        // code here
        vector<int> v;
       for(int i=0;i<N;i++){
           int ind = lower_bound(v.begin(),v.end(),vec[i])-v.begin();  
           //binary search to find insert index
          if(ind>=v.size()){
             v.push_back(vec[i]);
          }
         else v[ind] = vec[i];
       }
       return N-v.size();
    }
};