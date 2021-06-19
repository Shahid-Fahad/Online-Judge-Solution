#include<bits/stdc++.h>
using namespace std;
int main()
{
    //double l,n,x;
    long long int s,t=0,l,n,x;
    while(cin >> n >> l)
    {
        t++;
        x = n;
        if(n<0&&l<0)
            break;
        s=0;
        int f = 0;
        while(n!=1)
        {
            if(n>l)
            {
                f=1;
                break;
            }
            if(n%2==1)
                n = 3*n+1;
            else
                n = n/2;

            s++;
        }
        if(f==0)
            s++;
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,x,l,s);

    }
}

