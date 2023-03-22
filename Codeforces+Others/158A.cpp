#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,lim,c=0,i;
    cin >> n >> k;
    int arr[n];
    for(i=0;i<n;i++)
        cin >> arr[i];
    sort(arr,arr+n);
    reverse(arr,arr+n);
    lim = arr[k-1];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=lim&&arr[i]>0)
            c++;
    }
    cout << c << endl;
}
