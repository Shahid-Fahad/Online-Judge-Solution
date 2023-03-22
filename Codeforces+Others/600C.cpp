///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll arr[123]= {0};
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    ll i,j;
    for(i=0; i<s.size(); i++)
    {
        ll d=s[i];
        arr[d]++;
    }
    for(i=122; i>=0; i--)
    {
        if(arr[i]%2==1)
        {
            for(j=0; j<i; j++)
            {
                if(arr[j]%2==1&&j!=i)
                {
                    arr[j]++;
                    arr[i]--;
                    break;
                }
            }
        }
    }
    string x,tx;
    for(i=0; i<123; i++)
    {
        if(arr[i]!=0)
        {
            char c  = i;
            for(ll k=1; k<=arr[i]/2; k++)
                x.push_back(c);
        }
    }
    cout << x;
    tx = x;
    reverse(tx.begin(),tx.end());
    for(i=0; i<123; i++)
    {
        if(arr[i]%2==1)
        {
            char c  = i;
            cout << c;
        }
    }
    cout << tx << endl;
}

