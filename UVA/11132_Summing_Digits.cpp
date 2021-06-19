#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    while(cin >> n)
    {
        if(n==0)
        break;
        long long int t = n,sum;
        while(1)
        {
            sum=0;
            long long int r;
            while(t!=0)
            {
                r  = t%10;
                sum = sum+r;
                t = t/10;
            }
            if(sum<10)
            {
                cout << sum << endl;
                break;
            }
            else
                t = sum;
        }

    }
}
