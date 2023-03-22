#include <bits/stdc++.h>

using namespace std;

bool func(pair <int, int> x, pair <int, int> y)
{
    if(x.first > y.first)   return false;

    else if(x.first < y.first)  return true;

    else
    {
        if(x.second > y.second) return false;

        else    return true;
    }
}

int main()
{
    int M, N, i, f;

    pair <int, int> sleep, val;

    cin >> M;

    while(M)
    {
        M--, f = 1;

        cin >> N >> sleep.first >> sleep.second;

        vector <pair <int, int>> vec;

        for(i = 0; i < N; i++)
        {
            cin >> val.first >> val.second;
            vec.push_back(val);
        }

        sort(vec.begin(), vec.end(), func);

        for(i = 0; i < N; i++)
        {
            if(vec[i].first > sleep.first)
            {
                f = 0;
                break;
            }

            if(vec[i].first == sleep.first && vec[i].second >= sleep.second)
            {
                f = 0;
                break;
            }
        }

        if(f)   val = vec[0];

        else    val = vec[i];

        if(val.first >= sleep.first)    val.first -= sleep.first;

        else    val.first = 24 - (sleep.first - val.first);

        if(val.second >= sleep.second)  val.second -= sleep.second;

        else
        {
            val.first--;
            val.second = 60 - (sleep.second - val.second);
        }

        cout << val.first << " " << val.second << endl;
    }
}
