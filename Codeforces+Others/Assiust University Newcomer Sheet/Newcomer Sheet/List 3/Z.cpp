#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,x,i,q,p,j,a,b,s=0;
    vector<long long int>v,sum;
    cin >> n >> q;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v.push_back(x);
    }
    for(i=1;i<=q;i++)
    {
        cin >> a >> b;
        a--;
        b--;
        for(j=a; j<=b;j++)
        {
            s = s + v[j];
        }
        cout << s << endl;
        s = 0;
    }
    return 0;
}
