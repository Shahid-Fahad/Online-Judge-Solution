#include <bits/stdc++.h>

using namespace std;

bool comp(pair <int, int> a, pair <int, int> b)
{
    if(a.second >= b.second) return false;
    else return true;
}

int main()
{
    long long M, N, T, O, P, Q, i, j, k, count, p1, p2, p3, m;

    string dr;

    cin >> M;

    while(M--)
    {
        cin >> N >> dr;

        vector <pair<int, int>> vec;

        pair <int, int> pr;

        count = 0;

        for(i = 0; dr[i]; i++)
        {
            if(dr[i] == 'L')
            {
                pr.first = i;
                pr.second = i;

                vec.push_back(pr);

                count += i;
            }

            else
            {
                pr.first = i;
                pr.second = N - i - 1;

                vec.push_back(pr);

                count += N - i - 1;
            }
        }

        sort(vec.begin(), vec.end(), comp);

        for(i = 0; i < N; i++)
        {
            m = (vec[i].first >= N - vec[i].first - 1) ? vec[i].first : N - vec[i].first - 1;

            if(vec[i].second != m)
            {
                count -= vec[i].second;
                count += m;
            }

            cout << count << " ";
        }

        cout << endl;
    }
}
