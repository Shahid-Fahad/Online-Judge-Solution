#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    if(n%2==1)
    {
        cout << "-1" << endl;
        return 0;
    }
    int arr[n];
    for(i=0;i<n;i++)
    {
        arr[i] = i+1;
    }
    for(i=0;i<n;i=i+2)
    {
        swap(arr[i],arr[i+1]);
    }
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;


}
