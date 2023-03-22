#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,ev=0,od=0;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]%2==0)
            ev++;
        else
            od++;
    }
    if(ev>od)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==1)
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                cout << i+1 << endl;
                return 0;
            }
        }
    }
}
