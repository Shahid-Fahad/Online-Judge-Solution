///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    ll i;
    cin >> s;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[s.size()-1])
            cout<< s[i];
    }
    cout << endl;

}

