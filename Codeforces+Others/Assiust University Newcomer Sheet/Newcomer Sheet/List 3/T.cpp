#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,i;
    vector<int>v;
    cin >> n >> m;
    for(i=0;i<n*m;i++)
    {
        cin >>x;
        v.push_back(x);
    }
    cin >> x;
    for(i=0;i<v.size();i++)
    {
        if(v[i]==x)
        {cout << "will not take number" << endl;
        return 0;}
    }
    cout << "will take number" << endl;
    return 0;
}
