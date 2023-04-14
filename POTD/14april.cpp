class Solution {
  public:
    int finLength(int N, vector<int> color, vector<int> radius) {
         stack<int>s1;
        stack<int>s2;
        s1.push(color[0]);
        s2.push(radius[0]);
        for(int i=1;i<color.size();i++)
        {
            if(!s1.empty() && !s2.empty())
            {
            if(s1.top()==color[i] && s2.top()==radius[i])
            {
                s1.pop();
                s2.pop();
            }
            else
            {
                s1.push(color[i]);
                s2.push(radius[i]);
            }
            }
             else
             {
                s1.push(color[i]);
                s2.push(radius[i]);
            }
        }
        return s1.size();
    }
};