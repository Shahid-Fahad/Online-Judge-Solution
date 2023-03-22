#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,x,i,sum=0;
    cin >> x;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            sum = sum+i;
        x = x-i
    }
    cout << x+sum << endl;
}
