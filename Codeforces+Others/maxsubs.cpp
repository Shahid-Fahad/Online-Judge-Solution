///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll n,i;
    string s;
    cin >> n >> s;
    for(i=1; i<s.size(); i++)
    {
        if(s[i]==s[i-1])
        {
            s.erase(s.begin()+i-1);
            i--;
        }

    }
    cout << s.size() << endl;
}
