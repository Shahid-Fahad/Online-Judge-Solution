///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i;
    cin >> n;
    ll arr[n+5];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    ll q;
    cin >> q;
    while(q--)
    {
        ll s;
        cin >> s;
        ll low=0,hi=n-1,mid,f=0;
        while(low<=hi)
        {
            mid = (hi+low)/2;
            if(arr[mid]==s)
            {
                if(mid==0)
                {
                    cout << "X ";
                }
                else
                {
                    ll fn=0;
                    for(i=mid-1;i>=0;i--)
                    {
                        if(arr[i]<s)
                        {
                            cout << arr[i] << " ";
                            fn=1;
                            break;
                        }
                    }
                    if(fn==0)
                        cout << "X ";
                }
                if(mid==n-1)
                {
                    cout << "X\n";
                }
                else
                {
                    ll fn=0;
                     for(i=mid+1;i<n;i++)
                    {
                        if(arr[i]>s)
                        {
                            cout << arr[i] << endl;
                            fn=1;
                            break;
                        }
                    }
                        if(fn==0)
                        cout << "X\n";
                }
                f=1;
                break;
                
                
            }
            else if(arr[mid]>s)
            {
                hi = mid-1;
            }
            else
            {
                low = mid+1;
            }
            
        }
        if(f==0)
        {
            if(arr[hi]>s||hi<0)
            {
                cout << "X ";
            }
            else
            {
                cout << arr[hi] << " ";
            }
            if(arr[low]<s||low>n-1)
            {
                cout << "X\n";
            }
            else
            {
                cout << arr[low] << endl;
            }
            
        }

        
       
    
    }
}
