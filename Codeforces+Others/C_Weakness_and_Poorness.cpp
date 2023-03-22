#include <bits/stdc++.h>

using namespace std;

#define fIO                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);
#define ll long long int
#define ull unsigned long long int
#define srt(s) sort(s.begin(), s.end())
#define rsrt(s) sort(s.begin(), s.end(), greater<>())
#define tc     \
    int t_;    \
    cin >> t_; \
    while (t_--)
#define PI 2 * acos(0)
#define tani(a) atan(a) / (pi / 180)
#define sini(a) asin(a) / (pi / 180)
#define cosi(a) acos(a) / (pi / 180)
#define cos(a) cos(a *pi / 180)
#define sin(a) sin(a *pi / 180)
#define tan(a) tan(a *pi / 180)
#define mset(pq, v) memset(pq, v, sizeof(pq));
#define pb push_back
#define sp " "
#define sz(s) (int)(s).size()
#define LB lower_bound
#define UB upper_bound
#define fi(n) for (int i = 0; i < n; i++)
#define fj(n) for (int j = 0; j < n; j++)
#define FF first
#define SS second
#define CY cout << "YES\n";
#define CN cout << "NO\n";
#define CYR          \
    cout << "YES\n"; \
    return;
#define CNR         \
    cout << "NO\n"; \
    return;
#define C(s) cout << s << endl;
#define DBG cout << "DEBUG" << endl;
#define edl printf("\n");
#define eps 0.00000000000001
// int sum_digit(int x) { int sum=0; while(x>0){ sum+=x%10; x/=10; } return sum; }
// ll reverse_num(ll n){ ll tmp=n, ans=0, r; while(tmp>0){ r=tmp%10; ans=ans*10+r; tmp/=10; } return ans; }
// ll factorial(ll n){ ll i, ans=1; for(i=n; i>1; i--){ans*=i;} return ans; }
// ll gcd(ll num1, ll num2) { ll a,b,r; a=num1; b=num2; r=a%b; while(r>0){ a=b; b=r; r=a%b; } return b; }
// ll lcm(ll num1, ll num2) { return (num1*num2)/gcd(num1, num2); }
// bool prime(ll n) { if(n<2) return false; for(ll i=2;i<=sqrt(n);i++){ if(n%i==0)return false;} return true; }
// bool isSquare(ll x){ll sq=sqrt(x);return sq*sq==x;}
// ll mod_inverse(ll a, ll p, ll m){ ll r=1;while(p){if(p%2)r=((r%m)*(a%m))%m;a=((a%m)*(a%m))%m;p/=2;}return r;}
// ll POW(ll a,ll b){if(!b) return 1;ll r=POW(a,b/2);if(b%2) return r*r*a;else return r*r;}
// ll LOG2(ll n){ll v=1,c=0;while(v<=n)c++,v*=2;return c-1;}
// ll b_d(string s){ ll ans=0; ll c= s.size()-1; for(int i=0; i<s.size(); i++){ ll cp=c; ll t=1;if(s[i]=='1')while(cp--)t*=2;if(s[i]=='1')ans+=t;c--;}  return ans;}
// int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
// int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};

// ll h=0;
#define ld long double
ld arr[2000005];
ll n;
ld f(ld x)
{
    ld mx = -2000000000000;
    ld sum = 0;
    //-1.5,-0.5,.5,1.5
    for (int i = 0; i < n; i++)
    {
        ld h = arr[i] - x;
        if (sum < 0 && h < 0)
            sum += h;
        else
        {
            if (sum + h < h)
            {
                mx = max(mx, abs(sum));
                sum = h;
            }
            else
                sum += h;
        }
    }
    mx = max(mx, abs(sum));
    return mx;
}

void solve()
{
    cin >> n;
    fi(n) cin >> arr[i];
    ld l = -10000;
    ld h = 10000;
    while (h - l >= eps)
    {

        // cout<<l<<" Zz__zZ "<<h<<endl;
        ld m1 = l + (h - l) / 3;
        ld m2 = h - (h - l) / 3;
        if (f(m1) > f(m2))
            l = m1;
        else
            h = m2;
        // cout<<l<<" __ "<<h<<endl;
    }
    ld ans = f(l);
    cout << setprecision(6) << fixed << ans << endl;
    //for(int i=l; i<=h; i++)cout<<"<> "<<f(i)<<endl;
}

int main()
{
    //tc
    fIO;
    solve();
}
