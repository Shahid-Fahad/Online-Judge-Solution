#include <bits/stdc++.h>
#define BIGGEST(x, y, z) ((x > y && x > z) ? x : (y > z) ? y \
                                                         : z)

using namespace std;
int main()
{
    //     #ifndef ONLINE_JUDGE
    //      freopen("iin.txt","r",stdin);
    //      freopen("oout.o","w",stdout);
    //    #endif
    int sum = 0, x, t, j, n, b[101000] = {0}, c, i, a[101001], cnt = 0;
    cin >> t;
    i = 0;
    j = 0;
    x = t;
    while (t--)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            //cout<<n/2<<endl;
            sum += (n / 2);
            a[i] = (n / 2);
        }
        else
        {
            if (n > 0)
            {
            sum += ceil(n / 2.0);
                a[i] = ceil(n / 2.0);
                b[j] = ceil(n / 2.0);
            }
            else
            {
                sum += floor(n / 2.0);
                a[i] = floor(n / 2.0);
                b[j] = floor(n / 2.0);
            }
           // cout << "SOWJA " << b[j] << endl;
        }
        j++;
        i++;
    }
   
    int az = i;
    for (i = 0; sum != 0; i++)
    {
        if (i == az)
            break;
        if (b[i] != 0)
        {
            //cout << "SUM " << sum << endl;
            b[i]--;
            if(a[i]>0)
            a[i]--;
            else
            a[i]++;
            sum--;
            //cout<<b[i]<<endl;
        }
    }
    for (i = 0; i < x; i++)
    {
        cout << a[i] << endl;
    }
    // cout<<sum<<endl;
    return 0;
}