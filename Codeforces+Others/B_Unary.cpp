#include <bits/stdc++.h>

using namespace std ;
#define ll long long int
const ll mod  = 1e6+3;
inline ll MOD(ll a){ return (a%mod + mod) %mod ; }
inline ll modAdd(ll a,ll b){ return MOD( MOD(a) + MOD(b) ) ; }
ll bigMod(ll a,ll b){a%=mod;ll res=1;while(b>0){if(b&1)res=(res*a)%mod;a=(a*a)%mod;b>>=1;}return res;}
int main()
{
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    cout.tie(NULL) ;

    string s, str = "" ;
    cin >> s ;

    long long Num = 0 ;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '>') str += "1000" ;
        else if (s[i] == '<') str += "1001" ;
        else if (s[i] == '+') str += "1010" ;
        else if (s[i] == '-') str += "1011" ;
        else if (s[i] == '.') str += "1100" ;
        else if (s[i] == ',') str += "1101" ;
        else if (s[i] == '[') str += "1110" ;
        else if (s[i] == ']') str += "1111" ;
    }

    reverse (str.begin(), str.end()) ;
    ll k;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1') {
            ll k = bigMod(2,i);
            Num = modAdd(Num,k);
        }
    }

    cout << Num << endl ;

    return 0 ;
}