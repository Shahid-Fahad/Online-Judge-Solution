#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,c,s;
    int i,a=0,b=0;
    cin >> x;
    c=s=x;
    for(i=0;i<x.size();i++)
    {
        if(x[i]>=65&&x[i]<=90)
            {
                s[i] = s[i]+32;
                a++;
            }
        else
        {
            c[i] = c[i]-32;
            b++;
        }

    }
    if(a>b)
        cout << c << endl;
    else
        cout << s << endl;
}

