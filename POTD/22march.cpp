class Solution{   
public:
    long long solve(int x,int y,string S){
      long long ans=0;
      char p1,p2;
      if(x>=y)p1='p',p2='r';else p1='r',p2='p';
      stack<char>s;
      for(char i:S){
            if(i==p1 || i==p2){
              if(!s.empty() && s.top()==p1 && i==p2){
                  if(p1=='p')ans+=x;
                  else ans+=y;
                  s.pop();
              }
              else s.push(i);
            }
            else {
                int p_cnt=0,r_cnt=0;
                while(!s.empty()){
                    if(s.top()=='p')p_cnt++;else r_cnt++;
                    s.pop();
                }
                ans+=min(x,y)*min(p_cnt,r_cnt);
            }
      }
        int p_cnt=0,r_cnt=0;
        while(!s.empty()){
            if(s.top()=='p')p_cnt++;else r_cnt++;
            s.pop();
        }
        ans+=min(x,y)*min(p_cnt,r_cnt);
        return ans;
    }
};