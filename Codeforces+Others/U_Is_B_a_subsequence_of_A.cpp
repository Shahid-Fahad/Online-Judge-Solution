// ...............................Bismillahir Rahmaanir Rahim.......................................//
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<string> vs;
typedef vector<char> vc;
typedef set<int> si;
typedef set<long long> sl;
typedef set<char> sc;

#define show(x) cout << x
#define endl "\n"
#define Yes cout << "Yes\n"
#define No cout << "No\n"
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define PI 3.141592634
#define sz(n) (int)(n).size()
#define min(x, y) ((x) < (y) ? (x) : (y))
#define max(x, y) ((x) > (y) ? (x) : (y))
#define inarr(N, arr, i)           \
    for (int i = 1; i <= (N); i++) \
        scanf("%d", &arr[i]);
#define outar(n, ar)               \
    for (int i = 1; i <= (n); i++) \
        printf("%d ", ar[i]);
#define pub push_back
#define pob pop_back
#define nl cout << endl;
#define INPUT freopen("in.txt", "r", stdin)
#define OUTPUT freopen("out.txt", "w", stdout)
#define input freopen("input.txt", "r", stdin)
#define output freopen("output.txt", "w", stdout)
#define for0(n) for (int i = 0; i < n; i++)
#define for1(n) for (int i = 1; i <= n; i++)
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
void solve()
{
    ll i, j, N, M, x, y, a = 0;
    cin >> N >> M;
    int n[N], m[N];
    for (i = 0; i < N; i++)
    {
        cin >> n[i];
        //n.pub(x);
    }
    int ind=0,find=0;
    for (i = 0; i < M; i++)
    {
        cin >> m[i];
        // cin >> y;
        // m.pub(y);
    }
    for (i = 0; i < N; i++)
    {
        if (n[i] == m[a])
                a++;
            
    }
    if (a==M)
        YES;
    else
        NO;
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //  INPUT;
    //  OUTPUT;
    // #endif
    optimize();
    solve();
}