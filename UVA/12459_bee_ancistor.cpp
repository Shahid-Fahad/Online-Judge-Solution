#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(1)
    {
       long long int n,i;
        cin >> n;
       long long int arr[n];
        arr[0] = 1;
        arr[1] = 1;
        if(n==0)
            break;
        for(i=2;i<=n;i++)
            arr[i] = arr[i-1]+arr[i-2];
        cout << arr[n] << endl;
    }
}
