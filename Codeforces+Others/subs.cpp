///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    string s="hello",s2;
    cin >> s2;
    int i,j=0,m=5;
    for(i=0;i<s2.size();i++)
    {
        if(s2[i]==s[j])
        j++;

    }
    if(j==5)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

}
