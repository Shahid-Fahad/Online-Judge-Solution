#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,t=1,s,sum =0;
    cin >> s;
    while(s!=0)
    {
        n = t/s;
        sum = sum + n;
        s--;
    }
    printf("%lf\n",sum);
    return 0;

}