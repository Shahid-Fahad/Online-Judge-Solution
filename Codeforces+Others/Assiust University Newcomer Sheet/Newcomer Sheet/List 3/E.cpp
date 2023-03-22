#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i;
    vector<int>v;
    cin >> n;
    if(n>=2)
    {for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    int Min=v[0],Siz=0;
    for(i=0;i<v.size();i++)
    {
        if(v[i]<Min)
        {Min = v[i];
        Siz = i;}
    }
    cout << Min << " " << Siz+1 << endl;}
    return 0;
}
