///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<ll>d;
void div(ll n)
{
    ll i;
    for(i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            {
                d.push_back(i);
            }
            else
            {
                d.push_back(i);
                d.push_back(n/i);
            }
        }


    }
}
int main()
{
    ll n,x,y,i,p,k=0,j,m;
    cin >> n;
    div(n);
    sort(d.begin(),d.end());
    for(i=0; i<d.size(); i++)
    {
        if(n/d[i]>=5&&d[i]>=5)
        {
            k++;
            break;
        }
    }
    if(k==0)
    {
        cout << "-1" <<endl;
        return 0;
    }
    x = d[i];
    y = n/d[i];
    char arr[5]= {'a','e','i','o','u'};
    for(i=0,p=0,m=0; i<x;i++)
    {
        p = m;
        if(m==4)
            m=0;
        else
            m++;
        for(j=0;j<y;j++)
        {
            cout << arr[p];
            if(p==4)
                p=0;
            else
            p++;


        }
    }
    cout << endl;
}
