#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,n,w,i,c=1,g,sum=0;
    cin >> k >> n >> w;
    for(i=1;i<=w;i++)
    {
        g = k * i;
        sum = sum + g;
    }
    if(sum>n)
    cout << (sum-n) << endl;
    else
        cout << 0 << endl;
    return 0;
}