#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int h[n],a[n],i,c=0;
    for(i=0; i<n; i++)
    {
        cin >> h[i];
        cin >> a[i];
    }
    for(i=0; i<n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(h[i]==a[j])
                c++;
        }
    }
    cout << c << endl;
}