#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
       long long int a,b,c;
        cin >> a >> b >> c;
        if(!(a<(b+c)&&b<(a+c)&&c<(a+b)))
        {
            printf("Case %d: Invalid\n",i);
        }
        else
        {
            if(a==b&&b==c)
                printf("Case %d: Equilateral\n",i);
           else if((a==b)||(b==c)||(c==a))
                printf("Case %d: Isosceles\n",i);
           else
                printf("Case %d: Scalene\n",i);
        }
    }
}
