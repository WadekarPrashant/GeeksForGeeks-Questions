class Solution {

  public:

    long long maxPossibleValue(int N,vector<int> A, vector<int> B) {

        int pair = 0;

        long long ans = 0;

        int small = INT_MAX;

        

        for(int i = 0; i < N ; i++)

        {

            if(B[i]%2 != 0)

            {

                B[i]--;

            }

            

            B[i] /= 2;

            if(B[i] > 0)

            {

                pair += B[i];

                ans += (B[i] * A[i]*2);

                small = min(small,A[i]);

            }

        }

        

        if(pair%2 != 0)

        {

            ans -= (small*2);

        }

        if(pair < 2)

        {

            return 0;

        }

        

        return ans;

    }

        

};