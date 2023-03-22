///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,arr[3],i,j,s=0,p=0,rem;
    cin >> n;
    for(i=0; i<3; i++)
        cin >> arr[i];
    sort(arr,arr+3);
    ll a = arr[0],b=arr[1],c= arr[2];
    for(i=0; i*a<=n; i++)
    {
        for(j=0; i*a+j*b<=n; j++)
        {
            rem = n-((i*a)+(j*b));

            if(rem%c==0)
            {
                p = max(p,(i+j+(rem/c)));
            }
        }
    }
    cout << p << endl;

}

