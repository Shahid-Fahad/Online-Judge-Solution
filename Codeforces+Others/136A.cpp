#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int arr[n],a[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        a[arr[i]-1] = i+1;
    }
    for(i=0;i<n;i++)
        cout << a[i] << " ";
}
