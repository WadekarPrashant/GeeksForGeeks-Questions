class Solution
{

public:
    int xmod11(string x)
    {
       // code here
       int n = x.size();
       int B = 0;
       for(int i=0;i<n;i++){
           B = B*10 + (x[i]-'0');
           B = B%11;
       }
       return B;
    }
};