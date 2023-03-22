#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i;
    cin >> x;
    if(x==1)
    {
        cout << "NO" << endl;
        return 0;
    }
    for(i=2; i<=sqrt(x); i++)
    {
        if((x%i==0)&&(x!=2||x!=3))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
