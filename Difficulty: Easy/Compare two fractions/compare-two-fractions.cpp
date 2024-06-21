//{ Driver Code Starts

#include <iostream>
#include <regex>
using namespace std;


// } Driver Code Ends


class Solution {
  public:
    string compareFrac(string str) {

       string a="";
        string b="";
        string c="";
        string d="";
        int comma=0,slash=0;
        int i=0;
        while(i<str.length())
        {
            if(str[i]=='/')
            {
                slash++;
                i++;
            }
            if(str[i]==',')
            {
                comma=1;
                i+=2;
            }
            if(slash==0&&comma==0)
            {
                a+=str[i];
            }
            if(slash==1&&comma==0)
            {
                b+=str[i];
            }
            if(comma==1&&slash==1)
            {
                c+=str[i];
            }
            if(comma==1&&slash==2)
            {
                d+=str[i];
            }
            i++;
        }
        double value1=stod(a)/stod(b);
        double value2=stod(c)/stod(d);
        return (value1>value2)?(a+"/"+b):(value1==value2)?"equal":(c+"/"+d);
    }
};

//{ Driver Code Starts.

int main() {
    Solution ob;
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {

        string str;
        getline(cin, str);

        cout << ob.compareFrac(str) << endl;
    }
    return 0;
}

// } Driver Code Ends