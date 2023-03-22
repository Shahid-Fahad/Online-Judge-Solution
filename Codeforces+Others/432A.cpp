#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,i;
    cin >> n >> k;
    int c=0;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(x<=(5-k))
        c++;
    }
        cout << c/3 << endl;
}
