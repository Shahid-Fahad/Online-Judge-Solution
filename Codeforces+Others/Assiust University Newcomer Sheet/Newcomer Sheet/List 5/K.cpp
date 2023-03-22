#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,i,j;
    cin >> n >>x;
    int arr[n],a[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    for(j=1; j<=x; j++)
    {
        if(j%2==1)
        {
            a[0] = arr[n-1];
            for(i=1; i<n; i++)
            {
                a[i] = arr[i-1];
            }
        }
        else
        {
             arr[0] = a[n-1];
            for(i=1; i<n; i++)
            {
                arr[i] = a[i-1];
            }
        }
    }
    if(j%2==0)
    for(i=0; i<n; i++)
        cout << a[i] << " ";
    else
        for(i=0; i<n; i++)
        cout << arr[i] << " ";
}
