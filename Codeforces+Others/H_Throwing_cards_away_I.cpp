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
    while(cin >> n)
    {
        if(n==0)
        break;
        deque<ll>card;
        vector<ll>v;
        for(ll i=1;i<=n;i++)
        {
            card.push_back(i);
        }
        while(card.size()>1)
        {
            v.push_back(card.front());
            card.pop_front();
            ll k = card.front();
            card.push_back(k);
            card.pop_front();
        }
        cout << "Discarded cards:";
        for(ll i=0;i<v.size();i++)
        {
            if(i==0)
            cout << " ";
            cout << v[i];
            if(i!=v.size()-1)
            cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << card.back() << endl;
        
    }
    

}
