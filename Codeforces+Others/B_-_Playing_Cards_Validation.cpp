#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define yes "YES"<<endll
#define no "NO"<<endll
#define sp ' '
#define Case(i) cout<<"Case "<<i<<": "
#define endll '\n'
#define ub upper_bound
#define lb lower_bound
#define mod 1000000007
#define M 100005
#define nd node+node
#define left st,(st+en)/2,nd
#define right (st+en)/2+1,en,nd+1
#define sz(v) (int)v.size()
#define mem(x,y) memset(x,y,sizeof(x))
#define uniq(v) v.resize(distance(v.begin(),unique(v.begin(),v.end())))
#define rep(i,n) for(i=0; i<n; i++)
#define reprev(i,n) for(i=n-1; i>=0; i--)
#define repok(i,n,ok) for(i=0; i<n && ok; i++)
#define repn(i,n) for(i=1; i<=n; i++)
#define all(v) v.begin(),v.end()
#define esp 0.000001

void fast(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
}

int x;
vector<int>v;
map<ll,ll>cnt;

void func(int l, int r, int lvl){
    if(l>r) return;
    int mid1 = (l+r)/2, mid2 = (l+r+1)/2;
    bool ok1=true, ok2=true;
    if(v[mid1]==x){
        cnt[lvl]++;
        ok1=false;
    }
    if((l+r)%2 && v[mid2]==x){
        cnt[lvl]++;
        ok2=false;
    }
    if(ok1){
        if(v[mid1]<x) func(mid1+1,r,lvl+1);
        else func(l,mid1-1,lvl+1);
    }
    if(ok2 && (l+r)%2){
        if(v[mid2]<x) func(mid2+1,r,lvl+1);
        else func(l,mid2-1,lvl+1);
    }
}

int main(){
    fast();
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t=1, tc=0; cin>>t;
    while(t--){
        int n, i;
        cin>>n;
        v.clear(); v.resize(n+1);
        cnt.clear();
        repn(i,n) cin>>v[i];
        cin>>x;
        func(1,n,1);
        ll up=0, down=0;
        bool ok=false;
        repn(i,50){
            if(cnt[i] && !ok) up = cnt[i], ok=true;
            down += cnt[i];
        }
        //cout<<up<<sp<<down<<endll;
        double ans;
        ans=(up*100.0)/down;
        cout<<fixed<<setprecision(6)<<ans<<endll;
    }
}
