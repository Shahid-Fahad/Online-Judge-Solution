#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    while(scanf("%d%d",&n,&k)==2)
    {
        int cig=0,but=n,extra,rem;
        while(but>=k)
        {
            extra = but/k;
            cig = cig+extra;
            rem = but%k;
            but = rem+extra;
        }
        cout << n+cig << endl;
    }
}
