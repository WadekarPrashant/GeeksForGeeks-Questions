class Solution
{
    public:
    bool isPrime(int n)
    {
        int count=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
              count++;
            if(count>0)
             return 0;
        }
        return 1;
    }
    int minNumber(int arr[],int N)
    {
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum==1)
          return 1;
        int i = 0;
        while(1)
        {
           if(isPrime(sum+i))
             return i;
            i++;
        }
        return -1;
    }
};
