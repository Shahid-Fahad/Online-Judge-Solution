#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,b;
    while(scanf("%d%d",&n,&k)!=EOF)
    {
        a = n/k;
        b = a/k;
        cout << n+a+b << endl;
    }
}
