#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int N,l=0;
        cin >> N;
        int ara[N + 1];
        int sum[N*N+1];
        for (int k = 1; k <= N; k++)
        {
            cin >> ara[k];
        }
        for (int m = 1; m <= N; m++)
        {
            for (int j = m + 1; j <= N; j++)
            {
                sum[l] = ara[m] + ara[j] + j - m;
                l++;
            }
        }
        int p, min = sum[0];
        for (int p = 0; p < l; p++)
        {
            if (min > sum[p])
            {
                min = sum[p];
            }
        }
        cout << min << endl;
    }
}