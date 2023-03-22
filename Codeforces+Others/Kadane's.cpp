#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n+5];

    for(int i=1;i<=n;i++)
    cin >> arr[i];

    int kad[n+5]={0};

    int mx=INT_MIN;
    for(int i=1;i<=n;i++)
    {
        kad[i] =  max(kad[i-1],0) + arr[i];
        mx = max(kad[i],mx);
    }

    cout << mx << endl;
}