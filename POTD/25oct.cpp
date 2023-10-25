class Solution{
public:
    int knapSack(int N, int W, int val[], int wt[])
    {
int a[N+1][W+1];
        for( int i=0;i<N+1;i++){
            for(int j=0;j<W+1;j++){
                if( i==0 or j==0) { a[i][j] = 0; continue; }
                if( wt[i-1] <= j)
                a[i][j] = max ( val[i-1]+ a[i][j-wt[i-1]], a[i-1][j]);
                else 
                a[i][j] = a[i-1][j];
            }
        }
        return a[N][W];
    }
};
