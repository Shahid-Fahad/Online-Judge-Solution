#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j,t,p,M,k,cnt=0,c=0;
    cin >>t;
    for(p=1; p<=t; p++)
    {
        c=0;
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
               for(k=i;k<j;k++)
                {
                    if(arr[k]>arr[k+1])
                    {
                        cnt = 1;
                        break;
                    }
                }
                if(cnt==0)
                    c++;
                cnt =0;

            }
        }
            cout << c << endl;
    }
    return 0;
}

