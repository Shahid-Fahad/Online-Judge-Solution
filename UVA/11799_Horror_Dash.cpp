#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tc=0;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n],i;
        for(i=0;i<n;i++)
            cin >> arr[i];
        sort(arr,arr+n);
        tc++;
        printf("Case %d: %d\n",tc,arr[n-1]);
    }
}
