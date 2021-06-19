#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s=0,x,i;
    cout << "PERFECTION OUTPUT" << endl;
    while(1)
    {
        cin >> n;
        if(n == 0)
        {
            break;
        }
        for(i = 1; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                if(n/i==i)
                    s = s + i;
                else
                {
                    s = s+i;
                    s = s+(n/i);
                }
            }
        }
        s=s-n;
        cout << s << endl;
        if(n == s)
        {
            cout.width(5);
            cout << n <<"  PERFECT"<<endl;
        }
        else if( n > s)
        {
            cout.width(5);
            cout << n <<"  DEFICIENT"<<endl;
        }
        else if(n < s)
        {
            cout.width(5);
            cout << n << "  ABUNDANT"<<endl;
        }
        s=0;

    }
    cout << "END OF OUTPUT" << endl;
    return 0;
}
