#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,i,x;
    while(cin >> n >> r)
    {
        int f=0;
        int arr[n]={0};
        for(i=1;i<=r;i++)
        {
            cin >> x;
            arr[x-1] = 1;
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
            {
                cout << i+1 << " ";
                f++;
            }
        }
        if(f>0)
        cout << endl;
        if(f==0)
            cout << "*" << endl;
    }
}
