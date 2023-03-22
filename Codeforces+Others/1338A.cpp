#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,i,j,a=0,b=0,p=1,k;
    cin >> t;
    while(t--)
    {
        a=0,b=0,p=1;
        cin >> n;
        k = n/2;
        for(i=1;i<k;i++)
            a = a+pow(2,i);
        for(j=i;j<n;j++)
            b = b+pow(2,j);
        a = a+pow(2,n);
        cout << abs(a-b) << endl;
    }
}

