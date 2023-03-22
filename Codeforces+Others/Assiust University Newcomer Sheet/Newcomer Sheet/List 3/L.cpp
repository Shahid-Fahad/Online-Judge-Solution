#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,t,p,M,k;
    cin >>t;
    for(p=1; p<=t; p++)
    {
        cin >> n;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        for(i=0; i<n; i++)
        {
            for(j=i; j<n ;j++)
            {
               for(k=i;k<=j;k++)
                {
                    if(k==i)
                        M = arr[i];
                  else if(arr[k]>M)
                    M = arr[k];
                }
            cout << M <<" ";
            }
        }
        cout << endl;
    }
    return 0;
}

