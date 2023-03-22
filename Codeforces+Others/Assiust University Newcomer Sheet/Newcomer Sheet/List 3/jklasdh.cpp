#include<iostream>
using namespace std;
int main()
{
    long long int n,i=1,d,m,l,k,c=0,sp,ep,cp=0,epa,ld;
    cin >> n >> d >> m >> l;
    while(i<=n)
    {
        sp = (i-1)*m;
        ep = sp+l;
        epa = i*m;
        if(ep%d==0)
        {
            i++;
            continue;
        }
         if(i==n&&ep%d==0)
        {
            cout << ep+d <<endl;
            return 0;
        }
        else
        {
            if(i==n)
            {
                cout << ((ep/d)+1)*d << endl;
                return 0;
            }
            if(((ep/d)+1)*d>=epa)
            {
                i++;
                continue;
            }
            else
            {
                cout << ((ep/d)+1)*d << endl;
                return 0;
            }
        }

    }
    cout << ep+d << endl;
    return 0;
}
