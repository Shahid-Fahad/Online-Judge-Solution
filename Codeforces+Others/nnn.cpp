
///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll i,j,k,l,m;
        vector<ll>v,v1;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);

        for(i=0;i<n;i++)
        {
            if(arr[i]>=0)
                break;
            v.push_back(arr[i]);
        }
        ll c=0;
        for(i=n-1;i>=0;i--)
        {
                break;
            c++;
            v.push_back(arr[i]);
            if(c==5)
                break;
        }
        sort(v.begin(),v.end());
        //ll m=-999999999999999999999999;
        for(i=0;i<v.size()-4;i++)
            {
                ll s=v[i],c=1;
                for(j=i+1;j<v.size()-3;j++)
                {
                    s = s*v[j];
                    c++;
                    for(k=j+1;k<v.size()-2;k++)
                    {
                        s = s*v[k];
                        c++;
                        for(l=k+1;l<v.size()-1;l++)
                        {
                            s = s*v[l];
                            c++;
                            for(m=l+1;m<v.size();m++)
                            {
                                //cout << v[i] << " " <<v[j] << " "<<v[k] << " "<<v[l] << " "<<v[m] << " ";
                                v1.push_back(v[i]*v[j]*v[k]*v[l]*v[m]);
                                //cout << endl;
                            }
                        }
                    }
                }
            }
        //cout << m  << endl;
        sort(v1.begin(),v1.end());
        cout << v1[v1.size()-1] << endl;
    }
}
