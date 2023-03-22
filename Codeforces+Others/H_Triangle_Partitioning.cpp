///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t;
    cin >> t;
    for(ll tc=1;tc<=t;tc++)
    {
        ld ab,ac,bc,rat;
        cin >> ab >> ac >> bc >> rat;
        ld s = (ab+ac+bc)/2.0;
        ld abc = sqrt(s*(s-ab)*(s-ac)*(s-bc));
        ld ans = (rat*abc)/(1+rat);
        ld l=-1,r=1e18+1;
        for(ll i=0;i<128;i++)
        {
            ld m = (l+r)/2;
            ld ae = (m*ac)/ab;
            ld de = (m*bc)/ab;
            ld s2 = (ae+de+m)/2;
            ld ade = sqrt(s2*(s2-de)*(s2-ae)*(s2-m));
            if(ade>=ans)
            r = m;
            else
            {
                l=m;
            }
            
        }
        printf("Case %lld: %0.7Lf\n",tc,r);

    }

}
