class Solution {
  public:
    int maximum_profit(int n, vector<vector<int>> &intervals) {
        // Write your code here.
sort(intervals.begin() , intervals.end() , []( vector<int>&a , vector<int>&b ){
 return a[1] != b[1] ? a[1] < b[1] : ( a[0] != b[0] ? a[0] < b[0] : a[2] > b[2]) ;
        });
     
       map<int , int>profits;
    //lower bound : x or greater than x
    //upper bound : greater than x
    //prev(upper bound) : value less than x
       profits[-1] = 0;
        for(auto &it : intervals){
        int start = it[0] , end = it[1] , profit = it[2];
       int maxprofit = max( (prev( profits.upper_bound(end) ))->second, 
         (prev( profits.upper_bound(start) ))->second+ profit ) ;
           profits[end] = maxprofit;
    }
      return profits.rbegin()->second;
    }
};