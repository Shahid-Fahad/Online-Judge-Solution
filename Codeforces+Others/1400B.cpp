///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j;
    cin >>t;
    while(t--)
    {
        ll m,p,sc,ac,sw,aw,sum,tsc,tac,x;
        cin >> m >> p;
        cin >> sc >> ac;
        cin >> sw >> aw;
        tsc=sc,tac=ac;
        x=m;
        ll md=0,msc=0,mac=0,psc=0,pac=0;
        for(i=0; i<=sc; i++)
        {
            for(j=0; j<=ac; j++)
            {
                sum = (i*sw)+(j*aw);
                if(sum<=m)
                {
                    if(m-sum<x)
                    {
                        x=m-sum;
                        md = i+j;
                        msc = i;
                        mac = j;

                    }
                }
            }
        }
        sc=sc-msc;
        ac=ac-mac;
        ll pd=0;
        x=p;
        for(i=0; i<=sc; i++)
        {
            for(j=0; j<=ac; j++)
            {
                sum = (i*sw)+(j*aw);
                if(sum<=p)
                {
                    if(p-sum<x)
                    {
                        x=p-sum;
                        pd = i+j;
                        psc=i;
                        pac=j;
                    }
                }
            }
        }
        cout <<"first style " << msc << " "<< mac << " and " << psc << " " << pac << endl;
        ll a = md+pd;
        ///
        pd=0,x=p;
         psc=0,pac=0,msc=0,mac=0;
        for(i=0; i<=tsc; i++)
        {
            for(j=0; j<=tac; j++)
            {
                sum = (i*sw)+(j*aw);
                //cout << sum << " " << i << " " << j << " " << x << endl;
                if(sum<=p)
                {
                    if(p-sum<x)
                    {
                        x=p-sum;
                        pd = i+j;
                        psc = i;
                        pac = j;

                    }
                }
            }
        }
        tsc=tsc-psc;
        tac=tac-pac;
         md=0,x=m;
        for(i=0; i<=tsc; i++)
        {
            for(j=0; j<=tac; j++)
            {
                sum = (i*sw)+(j*aw);
                if(sum<=m)
                {
                    if(m-sum<x)
                    {
                        x=m-sum;
                        md = i+j;
                        msc=i;
                        mac=j;
                    }
                }
            }
        }
        cout <<"second style " << msc << " "<< mac << " and " << psc << " " << pac << endl;
        ll b = md+pd;
        cout << max(a,b) << endl;


    }
}
