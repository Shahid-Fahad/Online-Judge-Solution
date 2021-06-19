#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
int mark[10000000];
void sieve(int n)
{

    int i,j,limit=sqrt(n+1)+2;
    prime.push_back(2);
    mark[0]=1,mark[1]=1;
    for(i=4; i<=n; i+=2)
        mark[i]=1;
    for(i=3; i<=n; i++)
    {
        if(!mark[i])
            prime.push_back(i);
        if(i<=limit)
        {
            for(j=i*i; j<=n; j+=(i*2))
                mark[j]=1;
        }
    }

}
int main()
{
    sieve(1000000);
    int n;
    while(1)
    {
        cin >> n;
        if(n==0)
            break;
        int i,j,a,b,sum=0;
        for(i=3; i<n; i++)
        {
            if(!mark[i])
                b = n - i;
            if(!mark[b])
            {
                printf("%d = %d + %d\n",n,i,b);
                break;
            }
        }


    }
}
