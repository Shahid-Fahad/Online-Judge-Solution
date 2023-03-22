///Bismillahir Rahmanir Rahim
//ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pll pair<ll,ll>
#define vp vector<pair<ll,ll>>
#define pb push_back
#define ff first
#define ss second
#define case_(tc) cout << "Case " << tc << ": ";
#define mem(a,b) memset(a,b,sizeof(a))
#define all(qz) qz.begin(),qz.end()
#define rall(qz) qz.rbegin(),qz.rend()

#define YES cout << "YES" << endl;
#define NO cout << "NO" << endl;
#define dbg cout << "EKHANE" << endl;

ll Pow(ll c,ll d){return d==0? 1:c*pow(c,d-1);}
ll gcd(ll a,ll b) {return b==0? a:gcd(b,a%b);}
ll lcm(ll a,ll b) {return ((a*b)/gcd(a,b));}


ll sx,sy,ex,ey;
map<pair<ll,ll>,ll>mp;
map<pair<ll,ll>,ll>vis,dis;
//ll dx[] = {-1, 0, 1, 0};
//ll dy[] = {0, 1, 0, -1};
ll dx[]={1,1,1,0,0,-1,-1,-1};
ll dy[]={1,0,-1,1,-1,1,0,-1};
ll mx=1e9;
bool isvalid(ll x,ll y)
{
    if(x<1||y<1||x>mx||y>mx||vis[{x,y}]==1||mp[{x,y}]==0)
    return false;
    return true;
}
void bfs()
{
    queue<pair<ll,ll>>q;
    q.push({sx,sy});
    vis[{sx,sy}]=1;
    while(q.size()>0)
    {
        ll cx = q.front().ff;
        ll cy = q.front().ss;
        q.pop();
        for(ll i=0;i<8;i++)
        {
           ll X = cx+dx[i],Y = cy+dy[i];
           if(isvalid(X,Y))
           {
               vis[{X,Y}]=1;
               dis[{X,Y}]=dis[{cx,cy}]+1;
               q.push({X,Y});
           }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=1;
    //cin >> t;
    while(t--)
    {
        cin >> sx>>sy>>ex>>ey;
        ll m;
        cin >> m;
        while(m--)
        {
            ll x,y,z;
            cin >> x >> y >> z;
            for(ll i=y;i<=z;i++)
            mp[{x,i}]=1;
        }
        bfs();
        if(vis[{ex,ey}])
        cout << dis[{ex,ey}] << endl;
        else
        cout << "-1" <<endl;
        
    } 
}
