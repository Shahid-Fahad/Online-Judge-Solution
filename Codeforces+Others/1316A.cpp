#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        int n,m,s=0;
        cin >> n >> m;
        int arr[n];
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
               s = s+arr[i];
        }
        if(s>=m)
            cout << m << endl;
        else
            cout << s << endl;


    }
}
