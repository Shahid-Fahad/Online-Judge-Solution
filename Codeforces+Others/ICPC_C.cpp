#pragma GCC optimize("Ofast", "inline", "-ffast-math")
#pragma GCC target("avx,avx2,fma,mmx,sse2,sse3,sse4")
#pragma GCC optimization("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define yes "YES" << endll
#define no "NO" << endll
#define sp ' '
#define Case(i) cout << "Case " << i << ": "
#define endll '\n'
#define ub upper_bound
#define lb lower_bound
#define mod 1000000007
#define M 10000005
#define nd node + node
#define left st, (st + en) / 2, nd
#define right (st + en) / 2 + 1, en, nd + 1
#define sz(v) (int)v.size()
#define mem(x, y) memset(x, y, sizeof(x))
#define uniq(v) v.resize(distance(v.begin(), unique(v.begin(), v.end())))
#define rep(i, n) for (i = 0; i < n; i++)
#define reprev(i, n) for (i = n - 1; i >= 0; i--)
#define repok(i, n, ok) for (i = 0; i < n && ok; i++)
#define repn(i, n) for (i = 1; i <= n; i++)
#define all(v) v.begin(), v.end()
#define esp 0.000001

void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main()
{
    fast();
    //    freopen("run_in.txt","r",stdin);
    //    freopen("run_out.txt","w",stdout);
    //    vector<bool>vis(M,1);
    //    vector<int>prime[M];
    //    for(int i=2; i<M; i+=2) prime[i].pb(2), vis[i]=0;
    //    for(int i=3; i*i<M; i+=2){
    //        if(vis[i]){
    //            for(int j=i; j<M; j+=i) vis[j]=0, prime[j].pb(i);
    //        }
    //    }
    //    for(int j=sqrt(M); j<M; j++){
    //        if(vis[j]){
    //            for(int i=j; i<M; i+=j) prime[i].pb(j);
    //        }
    //    }
    vector<bool> vis(M, 1);
    vector<int> tmp;
    for (int i = 4; i < M; i += 2)
        vis[i] = 0;
    for (int i = 3; i * i < M; i += 2)
    {
        if (vis[i])
        {
            for (int j = i * i; j < M; j += 2 * i)
                vis[j] = 0;
        }
    }
    for (int i = 2; i < M; i++)
    {
        if (vis[i])
            tmp.pb(i);
    }
    //    int i;
    //    repn(i,30){
    //        cout<<i<<sp;
    //        for(auto x: prime[i]) cout<<x<<sp;
    //        cout<<endll;
    //    }
    int t = 1, tc = 0;
    cin >> t;
    while (t--)
    {
        int n, i;
        cin >> n;
        int a[n], b[n];
        bool ok = true;
        set<int> st;
        rep(i, n)
        {
            cin >> a[i];
            int x = a[i];
            for (int j = 0; tmp[j] * tmp[j] <= x; j++)
            {
                if (x % tmp[j] == 0)
                    st.insert(tmp[j]);
                while (x % tmp[j] == 0)
                    x /= tmp[j];
            }
            if (x > 1)
                st.insert(x);
            //for(auto x: prime[a[i]]) st.insert(x);
        }
        rep(i, n)
        {
            cin >> b[i];
            if (ok)
            {
                int x = b[i];
                for (int j = 0; tmp[j] * tmp[j] <= x; j++)
                {
                    if (x % tmp[j] == 0)
                    {
                        if (st.find(tmp[j]) == st.end())
                        {
                            ok = false;
                            break;
                        }
                    }
                    while (x % tmp[j] == 0)
                        x /= tmp[j];
                }
                if (x > 1 && st.find(x) == st.end())
                    ok = false;
                //                for(auto x: prime[b[i]]){
                //                    if(st.find(x)==st.end()){
                //                        ok=false;
                //                        break;
                //                    }
                //                }
            }
        }
        Case(++tc);
        if (ok)
            cout << "Yes ";
        else
            cout << "No ";

        ///BOB
        ok = true;
        int gcda = a[0], gcdb = b[0];
        rep(i, n)
        {
            gcda = __gcd(gcda, a[i]);
            gcdb = __gcd(gcdb, b[i]);
            if (a[i] != b[i])
                ok = false;
        }
        if (ok)
        {
            cout << "Yes" << endll;
            continue;
        }
        if (gcda == 1)
        {
            cout << "No" << endll;
            continue;
        }
        st.clear();
        ok = true;
        int x = gcda;
        for (int j = 0; tmp[j] * tmp[j] <= x; j++)
        {
            if (x % tmp[j] == 0)
                st.insert(tmp[j]);
            while (x % tmp[j] == 0)
                x /= tmp[j];
        }
        if (x > 1)
            st.insert(x);
        x = gcdb;
        for (int j = 0; tmp[j] * tmp[j] <= x; j++)
        {
            if (x % tmp[j] == 0)
            {
                if (st.find(tmp[j]) == st.end())
                {
                    ok = false;
                    break;
                }
            }
            while (x % tmp[j] == 0)
                x /= tmp[j];
        }
        if (x > 1 && st.find(x) == st.end())
            ok = false;
        //        for(auto x: prime[gcda]) st.insert(x);
        //        for(auto x: prime[gcdb]){
        //            if(st.find(x)==st.end()){
        //                ok=false;
        //                break;
        //            }
        //        }
        set<pair<ll,ll>>s;
        for(ll i=0;i<n;i++)
        {
            ll gc = __gcd(a[i],b[i]);
            a[i]/=gc;
            b[i]/=gc;
            s.insert({a[i],b[i]});
        }     
        if(s.size()>=2)
        ok=false;
        
        if (ok)
            cout << "Yes" << endll;
        else
            cout << "No" << endll;
    }
}