///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    ll c,i;
    while(cin >> a >> b  >> c)
    {
        ll m=0,v=0;
        if(b=="%")
        {
            for (i=0; i<a.size(); i++)
            {
                m = ((m * 10) + (a[i]-'0')) %c;
            }
            cout << m << endl;
        }
        else
        {
            ll f=0;
            for (i=0; i<a.size(); i++)
            {
                m = ((m * 10) + (a[i]-'0'));
                if(m/c!=0)
                    f=1;
                if(f==1)
                cout <<  m/c;
                m = abs(m - (m/c*c));
            }
            if(f==0)
                cout << 0;
           cout<< endl;
        }
    }

}

