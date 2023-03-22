#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,x;
    getline(cin,s);
    int i;
    for(i=0;i<s.size();i++)
    {
        if(s[i]!='{'&&s[i]!='}'&&s[i]!=' '&&s[i]!=',')
            x.push_back(s[i]);
    }
    sort(x.begin(),x.end());
    int c=0;
    for(i=0;i<x.size();i++)
    {
        if(i==0)
            c++;
        else if(x[i]!=x[i-1])
            c++;
    }
    cout << c << endl;
}
