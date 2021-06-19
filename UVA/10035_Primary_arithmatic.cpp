#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int a,b;

    while(1)
    {

       long long int r1,r2,s=0,rc=0;
        cin >> a >> b;
        if(a==0&&b==0)
            break;
            int c=0;
        while(1)
        {
            s = (a%10) + (b%10)+rc;
            rc = s/10;
            if((s+rc)>=10)
                c++;
            a = a/10;
            b = b/10;
            if((a==0)&&(b==0))
                break;

        }
        if(c>1)
        {cout << c << " carry operations."<< endl;

        }
       else if(c==1)
        {cout << c << " carry operation."<< endl;}

        else
            {cout <<"No carry operation."<< endl;
            }
    }
}
