#include <bits/stdc++.h>
using namespace std;
#define sp " "
#define n "\n"
void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
int main()
{
    fast();
    string s1, s2;
    cin >> s1 >> s2;
    cout << s1.size() << sp << s2.size() << n;
    cout << s1 + s2 << n;
    //char c1 = s1[0] ;
    //char c2 = s2[0] ;
    swap(s1[0], s2[0]);
    //cout<<c1<<sp<<c2<<n ;
    cout << s1 << sp << s2;
}

char s[100];
for(int i=0;i<n;i++)
{
   cin>>s[i];
}