#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> mp[50];
    //map<char,set<int>> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i] - 'a'].push_back(i);
    }

    int k;
    cin >> k;
    for (int i = 0; i < k; i++)
    {
        string x;
        cin >> x;
        int marker(-1);
        bool flag;
        for (int j = 0; j < x.size(); j++)
        {
            flag = true;

            if (j == x.size() - 1)
            {
                auto p = upper_bound(mp[x[j] - 'a'].begin(), mp[x[j] - 'a'].end(), marker);
                if (p == mp[x[j]-'a'].end())
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
            else
            {
                auto p = upper_bound(mp[x[j] - 'a'].begin(), mp[x[j] - 'a'].end(), marker);

                if (p == mp[x[j] - 'a'].end())
                {
                    cout << "NO" << endl;
                    flag = false;
                    break;
                }
                else
                {
                    marker = *p;
                }
            }
        }
        if (flag)
            cout << "YES" << endl;
    }
}