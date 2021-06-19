#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y;
    while(scanf("%d",&y)==1)
    {
        if(y==-1)
            return 0;
        long long int m=0,t=1,d;
        while(y--)
        {
            d = m;
            m = t;
            t = d+m+1;
        }
        cout << m  << " "<< t << endl;
    }
}
