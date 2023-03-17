class Solution{   
  public:
    string secondSmallest(int S, int D){
        int i=0,sum=1,digit;

        string ans="1";

        unordered_map<int,char> mp;

        unordered_map<char , int> mp2;

        for(i=0;i<10;i++){

            mp[i]=48+i;

            mp2[48+i]=i;

        }

        for(int i=1;i<D;i++){

            ans+='0';

        }

        if(S>=D*9 || D==1) return "-1";

        for(i=D-1;i>-1;i--){

            if(S-sum<10){

                if(i>0){

                    ans[i]=mp[S-sum];

                    digit=S-sum;}

                else{

                    ans[i]=mp[S-sum+1];

                    digit=S-sum+1;}

                break;

            }

            else{

                ans[i]=mp[9];

                sum+=9;

                if(sum==S){

                    digit=9;

                    break;

                }

            }    

        } 

        if(digit==9){

            if(i==0)

               return "-1";

            else if(i==D-1){

                   ans[i-1]=mp[mp2[ans[i-1]]+1];

                   ans[i]=mp[mp2[ans[i]]-1];

            }

            else{

                ans[i-1]=mp[mp2[ans[i-1]]+1];

                ans[i]=mp[mp2[ans[i]]-1];

            }

        }

        else{

        if(i==D-1){

            ans[i]=mp[mp2[ans[i]]-1];

            ans[i-1]=mp[mp2[ans[i-1]]+1];

        }

        else if(i==0){

            ans[i]=mp[mp2[ans[i]]+1];

            ans[i+1]=mp[mp2[ans[i+1]]-1];

          }

        else{

            ans[i]=mp[mp2[ans[i]]+1];

            ans[i+1]=mp[mp2[ans[i+1]]-1];

         }

        }

      return ans;
    }
};