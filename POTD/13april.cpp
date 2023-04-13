class Solution
{
public:
    vector<array<long long,2>> help(vector<int> &a){
      int n=a.size();
      long long p[n+1]={0};
      for(int i=0;i<n;i++){
        p[i]=a[i];
        if(i>0){
          p[i]+=p[i-1];
        }
      }
      vector<array<long long,2>> tmp;
      tmp.push_back({0,0});
      for(int i=1;i<n;i++){
        int l=1,h=i;
        long long dif=2e18;
        array<long long,2> t;

        while(l<=h){
          int mid=(l+h)/2;
          long long x=p[mid-1];
          long long y=p[i]-x;

          if(abs(x-y)<dif){
            dif=abs(x-y);
            t={x,y};
          }
        
          if(x>y){
              h=mid-1;
          }
          else{
              l=mid+1;
          }
        }
        tmp.push_back(t);
      }
      return tmp;
    }

    long long minDifference(int N, vector<int> A) {
        long long ans=2e18;
        auto x=help(A);
        reverse(A.begin(),A.end());
        auto y=help(A);
        reverse(y.begin(),y.end());
        for(int i=1;i+2<N;i++){
          ans=min(ans,max({x[i][0],x[i][1], y[i+1][0],y[i+1][1]}) - min({x[i][0],x[i][1], y[i+1][0],y[i+1][1]}));
        }
        return ans;
    }
};