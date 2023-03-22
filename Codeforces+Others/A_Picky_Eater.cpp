#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef               vector <int> vi;
typedef               vector <long long> vl;
typedef               set <int> si;
typedef               set <long long> sl;

#define               endl    "\n"
#define               Yes     cout << "Yes"
#define               PI 3.141592634
#define               sz(n) (int)(n).size()
#define               min(x,y) ((x) < (y) ? (x) : (y))
#define               max(x,y) ((x) > (y) ? (x) : (y))
#define               inarr(N,arr,i) for(i = 1 ; i <= (N) ; i++) \
                                         scanf("%d",&arr[i]);
#define               outar(n,ar)  for(int i = 1 ; i <= (n) ; i++) \
                                         printf("%d ", ar[i]);
#define               pub push_back
#define               pob pop_back
#define               nl  cout << endl;
#define               INPUT  freopen("in.txt","r",stdin)
#define               OUTPUT freopen("out.txt","w",stdout)

int main()
{
// #ifndef ONLINE_JUDGE
//     INPUT;
//     OUTPUT;
// #endif
    int a[10010], i, n, r, l, d = 0, s = 0;
    cin >> n;
    l = 1;
    r = n;
    for (i = 1; i <= n ; i++)
        cin >> a[i];
    int t = 1 ;
    for(i = 1 ; i <= n ; i++)
    {
        if(t % 2 != 0)
        {
            s += max(a[l],a[r]);
            d += min(a[l],a[r]);
            l++;
            r--;
            t++;
        }
        else
        {
            s += min(a[l],a[r]);
            d += max(a[l],a[r]);
            l++;
            r--;
            t++;
        }
    }
    cout << s << " " << d << endl;
}