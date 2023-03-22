///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll Pow(ll b, ll p)
{
    ll ans = 1;
    for (ll i = 1; i <= p; i++)
    {
        ans = ans * b;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    ll asum=0,bsum=0;
    map<ll,ll>mp1,mp2,mp3;
    ll k = (n-1)*9;
    for(ll i=0;i<a.size()-1;i++)
    {
        ll x = a[i]-48;
        ll y = b[i]-48;
        mp1[x]++;
        mp2[x]++;
    }
    ll totrem;
    for(ll i=1;i<=9;i++)
    {
        mp3[i] = n;
        ll x,y;
       if(mp1.find(i)!=mp1.end())
       {
           x= i* (Pow(10,mp1[i]));
           mp3[i] = mp3[i]-mp1[i];
       }
       else
       {
          x = i;
       }
       asum = asum+x;
       if(mp2.find(i)!=mp2.end())
       {
           y= i* (Pow(10,mp2[i]));
           mp3[i] = mp3[i]-mp2[i];
       }
       else
       {
          y = i;
       }
       bsum = bsum+y;

       totrem = totrem+mp3[i];
    }
    ll aw=0,tbs=bsum;
    for(ll i=1;i<=9;i++)
    {
        if(mp3[i]>0)
        {
            ll k = bsum + (i*Pow(10,mp3[i]));
        }
    }

}
