#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
const int N = 100001;
const long long int INF = 1e18;
using namespace std;
vector<pair<long long int,long long int>>vec[N];
#define fr(i,n) for(long long int i = 1; i <= n ; i++)
int node,edge;
void debug()
{
    cout<<"#BUG"<<"\n";
}
void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}
void dijkstra(long long int source)//
{
    long long int dist[100001];
    long long int  vis[100001];
    fr(i, 100000) dist[i] = INF;
    dist[source] = 0;//dist[1] = 0;
    fr(i, 100000) vis[i] = 0;

    set<pair<long long int,long long int>>st;//(dis,node)
    st.insert({0,source});//(log N) cmplexity  // (0,1)//(dis,Node)

    while(st.size() > 0)//E
    {
        auto node = *st.begin(); //(0,1)
        long long int v = node.second; //1
        long long int v_dist = node.first; //0
        st.erase(st.begin());//(0,1)

        if(vis[v] == 1)
        {
            continue;
        }
        else
        {
            vis[v] = 1; //vis[1] = 1;

            for(auto child : vec[v])//
            {
                long long int child_v = child.first;//2   
                long long int child_wt = child.second;//6   2

                if(v_dist + child_wt < dist[child_v])// 0+6 < INF, 0+2 < INF
                {
                    dist[child_v] = v_dist + child_wt;//dist[2]=0+6   dist[3]=0
                    st.insert({dist[child_v],child_v});//(6,2)
                }
            }
        }

    }

    for(long long int i = 1 ; i <= node ; i++)
    {
        cout<<dist[i]<<" ";
    }

} //o (V + E log (V))
void solve()
{
    long long int a, b, w;
    cin>>node>>edge;//3 3
    while(edge--)
    {
        cin>>a>>b>>w;
        vec[a].pb({b,w});
    }
    dijkstra(1);// o(V + E * log(V))
}
int main()
{
    fastIO();
    solve();
}