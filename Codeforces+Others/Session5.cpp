#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string>mp;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        string x;
        int y;
        cin >> x >> y;
        mp.insert({y,x});
    }

    for(auto it:mp)
    {
        cout << it.first << " " << it.second << endl;
    }
}