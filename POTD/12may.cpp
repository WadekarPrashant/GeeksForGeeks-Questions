class Solution {

  public:

    int arrayOperations(int n, vector<int> &arr) {

        // code here

        int count=0,flag = 1,flag2 = 0;// count means no of operation

        // flag2=1 denotes there is atleast one zero in the array

        // value of flag changes when zero or non-zero value is 

        // encountered(means if there are continous zero/non-zero

        // value then it doesn't changes)

        for(int i=0;i<n;i++){

            if(arr[i] != 0){

                if(flag == 1){

                    count++;

                    flag = 0;

                }

            }else{

                flag = 1;

                flag2 = 1;

            }

        }



        if(flag2 == 0) return -1;



        return count;



    }

};
