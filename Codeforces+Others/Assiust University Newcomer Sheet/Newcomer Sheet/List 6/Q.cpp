#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int l,r,m;
    long long int sum=1;
    cin >> l >> r >> m;
    while(l<=r)
    {
        sum = sum*l;
        l++;
    }
    cout << sum << endl;
    cout << 20%7;
}
