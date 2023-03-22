#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int arr[n],a[n],b[n];
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
        a[i] = arr[i];
        b[i] = arr[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(i=0; i<n; i++)
    {
        if(a[n-1]==arr[i])
            break;
    }
    int d = i;
    for(j=n-1; j>=0; j--)
    {
        if(b[0]==arr[j])
            break;
    }
    d = d+(n-j-1);
    if(j<i)
        d--;
    cout << d << endl;
}
