///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    while(cin >>n)
    {
        if(n==0)
        break;
        deque<ll>card;
        for(ll i=1;i<=n;i++)
        card.push_back(i);
        while(card.size()>2)
        {
            card.pop_front();
            card.push_back(card.front());
            card.pop_front();
        }
        cout << card.back() << endl;

    }


}
