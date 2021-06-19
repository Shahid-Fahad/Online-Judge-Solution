#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n];
        for(int i =0;i<n;i++)
        {
            cin >> arr[i];
        }
        sort(arr,arr+n);
        t++;
        printf("Case %d: %d\n",t,arr[n/2]);
    }
}
