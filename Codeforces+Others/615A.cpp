#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x,j=0;
    vector<int>v;
    cin >> n >> m;
    while(n--)
    {
        cin >> j;
        while(j--)
        {
            cin >> x;
            v.push_back(x);
        }
    }
    sort(v.begin(),v.end());
    int c=1,i;
    for(i=1;i<v.size();i++)
    {
        if(v[i-1]!=v[i])
            c++;
    }
    if((c==m)&&(v.size()>=1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
