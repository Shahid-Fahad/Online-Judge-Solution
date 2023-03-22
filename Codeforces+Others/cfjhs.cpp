///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int main()
{
    ll n,m,u=0,x=1;
    string s,q;
    cin >> n >> m;
    cin >> s;
    while(x<=1000)
    {
        u++;
        x++;
        cin >> q;
        if(q=="pop_back")
        {

         s.erase(s.end()-1,s.end());
        }
       else if(q=="front")
        {
           cout << s[0] << endl;
        }
       else if(q=="back")
        {
           cout << s[s.size()-1] << endl;
        }
       else if(q=="sort")
        {
            ll l,r;
            cin >> l >> r;
            sort(s.begin()+l,s.begin()+r);
        }
       else if(q=="reverse")
        {
            ll l,r;
            cin >> l >> r;
            l--;
            reverse(s.begin()+l,s.begin()+r);
        }
       else if(q=="push_back")
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
       else if(q=="print")
        {
            ll i;
            cin >> i;
            cout << s[i-1] << endl;
        }
       else if(q=="substr")
        {
            ll l,r;
            cin >> l >> r;
           cout << s.substr(l,r) << endl;
        }

        if(u==m)
            break;
    }

}
