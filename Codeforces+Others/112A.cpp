#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    int i;
    cin >> s >> x;
    for(i=0;i<s.size();i++)
    {
        if(s[i]>=65&&s[i]<=90)
            s[i] = s[i]+32;
        if(x[i]>=65&&x[i]<=90)
            x[i] = x[i]+32;
    }
    if(s<x)
        cout << "-1" << endl;
    else if(s>x)
        cout << "1" << endl;
    else
        cout << "0" << endl;
}
