class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)

    {

        pair<double,int> frac[n];

        for(int i=0;i<n;i++)frac[i]={(double(arr[i].value)/arr[i].weight),i};

        sort(frac,frac+n,greater<pair<double,int>>());

        

        double ans=0;

        for(int i=0;i<n;i++)

        {

            if(W>=arr[frac[i].second].weight)

            {

                ans+=arr[frac[i].second].value;

                W-=arr[frac[i].second].weight;

            }

            else if(W<arr[frac[i].second].weight)

            {

                ans+=W*(double(arr[frac[i].second].value)/arr[frac[i].second].weight);

                break;

            }

        }

        

        return ans;

    }


};
