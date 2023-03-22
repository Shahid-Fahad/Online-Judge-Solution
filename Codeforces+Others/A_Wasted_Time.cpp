///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
   // cin.tie(NULL);
    ll n,k;
    cin >> n >> k;
    vector<pair<ld,ld>>v;
    for(ll i=0;i<n;i++)
    {
        ld x,y;
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    ld sum=0;
    for(ll i=1;i<v.size();i++)
    {
        ld x1=v[i-1].first,y1=v[i-1].second,x2=v[i].first,y2=v[i].second;
        ld dis = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        cout << "AAA " << dis<< endl;
        sum = sum+dis;
    }
    cout << "TEST " << sum << endl;
    ld ans = ((1.0/50.0)*sum)*k;
    printf("%0.9Lf\n",ans);

}
