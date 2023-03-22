///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,c,j;
    cin >> n;
    vector<ll>v;
    vector<ll>d;
    for(i=0;i<n;i++)
    {
        cin >> c;
        v.push_back(c);
    }
    for(i=1;i<n-1;i++)
    {
        vector<ll>temp;
        temp=v;
        temp.erase(temp.begin()+i);
        ll m = temp[1]-temp[0];
        for(j=1;j<temp.size()-1;j++)
        {
            if(m<temp[j+1]-temp[j])
                m = temp[j+1]-temp[j];
        }
        d.push_back(m);
    }
    sort(d.begin(),d.end());
    cout << d[0] << endl;
}
