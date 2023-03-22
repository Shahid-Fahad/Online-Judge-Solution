///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m, c;
    while (cin >> n >> m >> c)
    {
        if (n == 0 && m == 0 && c == 0)
            break;
        ll ans = 0;
        if (n == m)
        {
            if (c == 1)
            {
                ll t = 0;
                ans = ans + (n - 8 + 1);
                n = n - 2;
                while (n >= 8)
                {
                    t = t + (n - 8 + 1);
                    n = n - 2;
                }
                ans = ans + (t * 2);
            }
            else
            {
                n--;
                while (n >= 8)
                {
                    ans = ans + (n - 8 + 1);
                    n = n - 2;
                }
                ans = ans * 2;
            }
        }
        else
        {
            if(c==0&&n%2==0&&m%2==0)
            ans--;
                if(n>m)
                swap(n,m);
                ll temp=n;
                ll t = 0;
                
                temp = temp - 2;
                while (temp >= 8)
                {
                    t = t + (temp - 8 + 1);
                    temp = temp - 2;
                }
                ans = ans + t;
                
                ll x = m-n+1;

                if(x==2)
                {
                    ans = ans + (n-8+1);
                    n--;
                }
                else
                {
                    while(x>2)
                    {
                        ans = ans + (n-8+1);
                        x = x-2;
                    }
                    if(x==2)
                    {
                        ans = ans + (n-8+1);
                        n--;
                    }
                    else if(x==1)
                    {
                        ans = ans + (n-8+1);
                        n = n-2;
                    }
                }
                
                 t=0;
                while (n >= 8)
                {
                    t = t + (n - 8 + 1);
                    n = n - 2;
                }
                ans = ans+t;
        }

        cout << ans << endl;
    }
}
