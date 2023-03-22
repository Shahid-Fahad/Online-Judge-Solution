#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p=0,c=1,i;
    vector<int>v;
    string s;
    cin >> n;
    cin >> s;
    v.push_back(0);
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='L')
        v.push_back(--p);
        else
        v.push_back(++p);
    }
    p=0;
    for(i=0;i<s.size();i=i+2)
    {
        if(s[i]=='L')
        v.push_back(--p);
        else
        v.push_back(++p);
    }
    p=0;
    for(i=1;i<s.size();i=i+2)
    {
        if(s[i]=='L')
        v.push_back(--p);
        else
        v.push_back(++p);
    }
     for(i=0;i<v.size();i++)
    {
        cout << v[i] << endl;
    }
    sort(v.begin(),v.end());
    for(i=1;i<v.size();i++)
    {
        if(v[i]!=v[i-1])
            c++;
    }
    cout << c << endl;
}
