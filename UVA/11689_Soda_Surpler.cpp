#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int c,f,e,d=0;
        cin >> c >> f >> e;
        int k = c+f;
        while(1)
        {
            k = k-e;
            if(k<0)
                break;
            d++;
            k++;
        }
        cout << d << endl;

    }
}
