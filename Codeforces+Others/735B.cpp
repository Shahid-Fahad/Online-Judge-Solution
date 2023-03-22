///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ll a,b,n,i,j;
    cin >> n >> a >> b;
    vector<ll>v;
    for(i=0;i<n;i++)
    {
        cin >> j;
        v.push_back(j);
    }
    sort(v.begin(),v.end());
    ll k = n-(a+b);
    for(i=1,j=0;i<=k;j++,i++)
    {
        v.erase(v.begin()+j);
        j--;
    }
    if(b>a)
    swap(a,b);
    ld sum1=0,sum2=0,avg1,avg2;
    for(i=0,j=1;j<=a;i++,j++)
    {
        sum1 = sum1+v[i];
    }
    avg1=sum1/(a+0.0);
    for(j=1;j<=b;i++,j++)
    {
        sum2 = sum2+v[i];
    }
    avg2 = sum2/(b+0.0);
    printf("%Lf\n",avg1+avg2);

}
