///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    for(ll i=0;i<s.size();i++)
    {
        if(s[i]=='.')
        {
            cout << endl;
            return 0;
        }
        cout << s[i];
    }
    cout << endl;

}
