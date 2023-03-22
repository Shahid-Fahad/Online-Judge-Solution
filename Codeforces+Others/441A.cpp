///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,vm,i,c=0;
    cin >> n >> vm;
    vector<ll>s;
    for(i=1;i<=n;i++)
    {
        ll q,p;
        cin >> q;
        vector<ll>v;
        c=0;
        while(q--)
        {
            cin >> p;
            if(vm>p)
            {
                c++;
            }

        }
        if(c>0)
        s.push_back(i);
    }
    cout << s.size() << endl;
    for(i=0;i<s.size();i++)
    {
        cout << s[i] << " ";
    }
    cout << endl;
}
