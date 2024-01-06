class Solution {
public:
	int primeFactors(int n) 
    { 
    
        vector<int> a;
        while (n % 2 == 0) 
        { 
            a.push_back(2);
            n = n/2; 
        } 
        for (int i = 3; i <= sqrt(n); i = i + 2) 
        { 
            while (n % i == 0) 
            { 
                a.push_back(i);
                n = n/i; 
            } 
        } 
        if (n > 2){ 
           a.push_back(n);
        }
        return a.size();
    }
	int sumOfPowers(int a, int b){
	    int c=0;
	    for(int i=a;i<=b;i++){
	        c += primeFactors(i);
	    }
	    return c;
	}
};
