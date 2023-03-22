#include <bits/stdc++.h>
using namespace std;

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("iin.txt", "r", stdin);
//     freopen("oout.o", "w", stdout);
// #endif
    long long int x, b[1000], a[100100], i, j, sum = 0, k, p, l, n, p1, t, m;
    cin >> n >> k;
    for (i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        cin >> x;
        int lef, ri, mid, f = 0;
        lef = 0;
        ri = n - 1;
        while (lef <= ri)
        {
            mid = (lef + ri) / 2;
            if (x < a[mid])
                ri = mid - 1;
            else
                lef = mid + 1;
        }
        //cout<<mid<<' ';
        if (f == 1)
            cout << mid + 1 << endl;
        else //cout<<"NO"<<endl;
        {
            //cout << "TEST " << lef << " " << ri << endl;
           cout << lef << endl;
        }
    }

    return 0;
}