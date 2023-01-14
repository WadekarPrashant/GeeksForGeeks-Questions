#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void solve()
{
    int l,n_ones=0;
    cin>>l;
 
    string s;
    cin>>s;
 
    if(s[0]=='1')
        n_ones=1;
    
    for(int i=1;i<l;i++)
    {
        if(s[i]=='0')
            cout<<'+';
        else
        {
            if(n_ones>0)
            {
                cout<<'-';
                n_ones--;
            }
 
            else
            {
                cout<<'+';
                n_ones++;
            }
        }
    }
    cout<<endl;
}
 
int main()
{
    int n;
    cin>>n;
    while(n--)
        solve();
}