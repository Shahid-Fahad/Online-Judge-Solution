#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n;
    while(cin >> n)
    {
        if(n==0)
            break;
        ll c=0,r,x=1;
        string t="";
        while(n!=0)
        {
            r = n%2;
            t.push_back(r+48);
            if(r==1)
                c++;
            n= n/2;
        }
        reverse(t.begin(),t.end());
        int i;
        for(i=0;i<t.size();i++)
            if(t[i]!=0)
            break;
        cout << "The parity of ";
        for(;i<t.size();i++)
            cout << t[i];
        cout <<" is "<< c << " (mod 2).\n";
    }
}
