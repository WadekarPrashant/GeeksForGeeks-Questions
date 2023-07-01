#include<bits/stdc++.h>

class Solution{
public:
    bool solve(int input){
        if(input==1 || input==7){
            return true;
        }
        if(input<10){
            return false;
        }
        int x,temp=0;
        while(input!=0){
             x=input%10;
            input=input/10;
           temp+=x*x;
        }
        input=temp;
        solve(input);
    }

    int nextHappy(int N){
        int x=0;
        int input=N+1;
        while(x==0){
            solve(input);
            if(solve(input)==true){
                return input;
            }
            else{
                input+=1;
            }
        }
        return -1;
    }
};