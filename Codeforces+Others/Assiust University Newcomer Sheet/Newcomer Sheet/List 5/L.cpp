#include<bits/stdc++.h>
using namespace std;
void*con(int b[],int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        cout << b[i] << " ";
        for(i=0;i<n;i++)
        cout << a[i] <<" ";
}
int main()
{
    int n;
    cin >> n;
    int a[n],b[n];
    int i;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        cin >> b[i];
    con(b,a,n);
}
