///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
     ios_base::sync_with_stdio(false);
      cin.tie(NULL);
    ll n;
    cin >> n;
    ll i;
    vector<ll> v;
    ll ind1, ind2, ind3;
    for (i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
            ind1 = i;
        if (x == 2)
            ind2 = i;
        if (x == 3)
            ind3 = i;
        v.push_back(x);
    }
    ll s = 1, min = INT_MAX;
   printf("? 1\n");
   //fflush(stdout);
   printf("? 2\n");
   //fflush(stdout);
   printf("? 3\n");
   //fflush(stdout);
    set<ll> st;
    st.insert(1);
    st.insert(2);
    st.insert(3);

    if (v[0] == 1 || v[n - 1] == 1)
        st.erase(1);
    if (v[0] == 2 || v[n - 1] == 2)
        st.erase(2);
    if (v[0] == 3 || v[n - 1] == 3)
        st.erase(3);

    ll y = *(st.begin());
    if (y == 1)
    {
        printf("! %lld\n",ind1);
        //fflush(stdout);
        return 0;
    }
    if (y == 2)
    {
        printf("! %lld\n",ind2);
       // fflush(stdout);
        return 0;
    }
    if (y == 3)
    {
       printf("! %lld\n",ind3);
       // fflush(stdout);
        return 0;
    }
}
