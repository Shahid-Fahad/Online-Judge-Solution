#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=5,s=1;
    cin >> n;
    while(m<n)
    {
        m=m+5;
        s++;
    }
    cout << s << endl;
}
