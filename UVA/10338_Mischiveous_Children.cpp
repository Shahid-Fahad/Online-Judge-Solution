#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tc=0;
    cin >> n;
    while(n--)
    {
        string s;
        unsigned long long int x=1;
        cin >> s;
        int k = s.size();
        for(;k>=3;k--)
        {
            x = x*k;
        }
        tc++;
        printf("Data set %d: %lld\n",tc,x);
    }
}
