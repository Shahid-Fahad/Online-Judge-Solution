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
#define eps 0.0000001
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

double n, t;
double s[1000005], d[1000005];

double f(double sc)
{

    double mn = 1e16;
    double mx = -1;
    for (int i = 0; i < n; i++)
    {
        double a = (s[i] * sc) + d[i];
        mn = min(mn, a);
        mx = max(mx, a);
    }

    return mx - mn;
}

int main()
{
    cin >> n >> t;

    for (int i = 0; i < n; i++)
    {
        cin >> s[i] >> d[i];
    }
    double l = 0;
    double h = t;
    while (h - l > 0.0000000001)
    {
        double m1 = l + (h - l) / 3.0;
        double m2 = h - (h - l) / 3.0;

        // cout << f(m1) << " ___  " << f(m2)  << endl;;
        if (f(m1) > f(m2))
            l = m1;
        else
            h = m2; //cout << l << " >> " << h  << endl;;
    }

    cout << setprecision(6) << fixed << f(l) << endl;
}