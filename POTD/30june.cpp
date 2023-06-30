class Solution{
public:	
		
	int isDivisible(string s){
	    int n=s.length();
	    int st=-1;
	    for(int i=0;i<n;i++)
	    {
	       if(st==-1)
    	   {
    	            if(s[i]=='1') st=1;
            	    else st=0;
	       }
	       else if(st==0)
	       {
	          if(s[i]=='1') st=1;
	       }

	       else if(st==1)
	       {
	            if(s[i]=='0')st=2;
	            else st=0;
	       }
	       else if(st==2)
	       {
	            if(s[i]=='0')
	                st=1;
	       }
	    }
	    return (st==0);
	}

};
