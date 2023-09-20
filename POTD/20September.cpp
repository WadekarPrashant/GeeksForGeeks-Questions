class Solution
{
  public:
        vector <int> rotate (int N, int D)
        {
            D=D%16;
            int left=((N<<D)|(N>>(16-D)))&((1<<16)-1);
            int right=((N>>D)|(N<<(16-D)))&((1<<16)-1);
            return vector<int>{left,right};
        }
};
