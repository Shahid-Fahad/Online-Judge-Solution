///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    if(s.size()==1)
    {
        cout << 0 << endl;
        return 0;
    }
    ll ans = 1;
    ll sz = s.size() / 2;
    ll arr[50];
    arr[0]=0;
    ll k = 9;
    for (ll i = 2; i <= 20; i=i+2)
    {
        arr[i]=k;
        k = k * 10;
    }
    ll sm = 0;
    for (ll i = 0; i < s.size(); i=i+2)
    {
        sm = sm + arr[i];
    }
    if(s.size()%2==1)
    {
        cout << sm<< endl;
        return 0;
    }
    for (ll i = 0, j = s.size() - 1; i < sz; i++, j--)
    {
        ll fs = s[i] - '0';
        ll ls = s[j] - '0';
        if (i == 0)
        {
            if (fs == ls)
            {
                ans = ans * fs;
            }
            else
            {
                if (fs > ls)
                    ans = ans * (fs-1);
                else
                    ans = ans * fs;
            }
        }
        else
        {
            if (fs == ls)
            {
                ans = ans * (fs + 1);
            }
            else
            {
                if (fs > ls)
                    ans = ans * (fs);
                else
                    ans = ans * (fs+1);
            }
        }
       // cout << "ANS " << ans << endl;
    }
    cout << sm + ans << endl;
}
