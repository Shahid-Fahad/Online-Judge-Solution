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
    while(cin >> q)
    {
        u++;
        if(q=="pop_back")
        {
         s.pop_back();
        }
       else if(q=="front")
        {
           cout << s.front() << endl;
        }
       else if(q=="back")
        {
         cout << s.back() << endl;
        }
       else if(q=="sort")
        {
            ll l,r;
            cin >> l >> r;
            l--;
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
            ll l,r,i;
            cin >> l >> r;
            for(i=l-1;i<r;i++)
                cout << s[i];
            cout << endl;
        }
        if(u==m||u==1000)
            break;
    }

}
