//Bishmillahir Rahmanir Raheem
//sajeedreefy
#include<bits/stdc++.h>
using namespace std;
#define SZ 100000
typedef long long int ll;
#define pb push_back
#define pf push_front
#define ull unsigned long long
//#define mp make_pair
#define fr0(i,n) for (ll i=0;i<n;i++)
#define fr1(i,n) for (ll i=1;i<=n;i++)
#define ff first
#define ss second
#define mod 1000000007

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

std::string toBinary(ll n)
{
    std::string r;
    while(n!=0)
    {
        r=(n%2==0 ?"0":"1")+r;
        n/=2;
    }
    return r;
}

//ll arr[SZ];
signed main()
{
    fastIO();
    ll t=1,mini,q,c,i,j,x,y,sum,n,m,mx;
    string st,stt,ts;
    //scanf("%lld",&t);
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector <ll> vec(n),sec;
        for(ll i=0;i<n;i++) cin >> vec[i];
        sec=vec;
        sort(sec.rbegin(),sec.rend());
        map <ll,vector<ll>> mp;
        for(ll i=0;i<n;i++)
        {
            mp[sec[i]].pb(i+1);
        }
        for(ll i=0;i<vec.size();i++)
        {
            
            for(ll j=0;j<mp[vec[i]].size();j++)
            {
                if(mp[vec[i]][j]!=0)
                {
                    cout << mp[vec[i]][j] << " ";
                    mp[vec[i]][j]=0;
                    break;
                }
            }
        }
        cout << endl;

    }
    return 0;
}