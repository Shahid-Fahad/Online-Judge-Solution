#include<bits/stdc++.h>
using namespace std;
int prime(long long int x)
{
    int i;
    int p = sqrt(x);
    for(i=2;i<=p;i++)
    {
        if(x%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long int x,t;
    cin >> t;
    while(t--)
    {
        cin >> x;
        if(prime(x)&&x!=0&&x!=1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
