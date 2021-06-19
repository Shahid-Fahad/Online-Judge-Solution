#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f;
    while(1)
    {
        double day=0,sum1=0,sum2=0;
        cin >> h >> u >> d >> f;
        if(h==0)
            break;
        f = f/100;
        while(1)
        {
            sum1 = u - day*(u*f);
                if(sum1>=0)
                sum2 = sum2 + sum1;
                day++;


            if(sum2>h)
            {
                cout << "success on day " << day << endl;
                break;
            }
            sum2 = sum2-d;
            if(sum2<0)
            {
                cout << "failure on day " << day<< endl;
                break;
            }
        }
    }

}

