///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll i;
        while (m--)
        {
            ll l, r;
            cin >> l >> r;
            ll k = r - l + 2;
            if (l == r)
                k--;
            if (l == 1 && r == n)
            {
                cout << 1 << endl;
                continue;
            }
            l--, r--;
            set<ll> st;
            ll tmp = 0;
            st.insert(0);
            if (l == 0)
                i = r + 1;
            else
            {
                i = 0;
            }

            for (; i < n;)
            {

                if (s[i] == '+')
                {
                    tmp++;
                    st.insert(tmp);
                }
                else
                {
                    tmp--;
                    st.insert(tmp);
                }

                if (i == l - 1)
                {
                    i = r + 1;
                   
                }
                else
                {
                    i++;
                }
            }
            cout << st.size() << endl;
        }
    }
}
