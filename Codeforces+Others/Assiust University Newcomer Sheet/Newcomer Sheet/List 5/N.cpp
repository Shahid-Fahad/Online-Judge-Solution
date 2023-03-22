#include<bits/stdc++.h>
using namespace std;
void shift(int arr[],int n,int z)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
            cout << arr[i] << " ";
    }
    for(i=1;i<=z;i++)
    {
        cout << "0 ";
    }
    return;
}
int main()
{
    int n,z=0,i;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
        if(arr[i]==0)
            z++;
    }
    shift(arr,n,z);
}
