///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    deque<ll>scr;
    set<ll>msg;
    while(n--)
    {
        ll x;
        cin >> x;
        if(msg.find(x)==msg.end())
        {
            if(scr.size()==k)
            {
                msg.erase(scr.back());
                scr.pop_back();
            }
            scr.push_front(x);
            msg.insert(x);
        }
    }
    cout << scr.size() << endl;
    while(scr.size()!=0)
    {
        cout << scr.front() << " ";
        scr.pop_front();
    }

}
