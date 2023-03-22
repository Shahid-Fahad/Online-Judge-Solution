#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    vector<string>v;
    while(t--)
    {
        string s,t;
        cin >> s;
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    string a = v[0];
    string b = v[v.size()-1];
    int ag=0,bg=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==a)
            ag++;
        else
            bg++;
    }
    if(ag>bg)
        cout << a << endl;
    else
        cout << b << endl;
}
