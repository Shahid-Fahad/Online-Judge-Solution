///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    string s1,s2;
    int a,b;
    cin >> s1 >> s2;
    a = s1.size();
    b = s2.size();
    if((s1==s2))
    cout << "-1" << endl;
    else
        cout << max(a,b) << endl;


}
