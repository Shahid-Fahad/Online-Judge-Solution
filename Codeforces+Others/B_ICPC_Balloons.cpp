#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;

        int sum = 0;
        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            sum = sum + 2;
            for (int j = i + 1; j >= 0; j--)
            {

                if (str[i] == str[j])
                {
                    cnt++;
                    sum = sum - 2;
                    break;
                }
            }
          
        }
        cout << sum + cnt << endl;
    }

    return 0;
}