///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<ll>v1,v2;
    ll sum=0;
    for(ll i=0;i<n;i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
        sum = sum+x;
        v1.push_back(sum);
    }
    sort(v2.begin(),v2.end());
    sum=0;
    for(ll i=0;i<n;i++)
    {
        sum = sum+v2[i];
       
        v2[i]= sum;
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll t,l,r;
        cin >> t >> l >> r;
        if(t==1)
        {
            l--,r--;
            if(l==r)
            {
                if(l==0)
                cout << v1[l] << endl;
                else
                {
                    cout << v1[l]-v1[l-1] << endl;
                }
                
            }
            else
            {
                if(l==0)
                cout << v1[r] << endl;
                else
                {
                    
                    cout << v1[r]-v1[l-1] << endl;
                }
            }
            
        }
        else
        {
            l--,r--;
            if(l==r)
            {
                if(l==0)
                cout << v2[l] << endl;
                else
                {
                    cout << v2[l]-v2[l-1] << endl;
                }
                
            }
            else
            {
                if(l==0)
                cout << v2[r] << endl;
                else
                {
                    cout << v2[r]-v2[l-1] << endl;
                }
            }
        }
        
    }


}
