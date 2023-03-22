#include <bits/stdc++.h>

using namespace std;

#define ll long long

#define FastIO ios_base::sync_with_stdio(false)

#define sz(v) (int)v.size()

pair<int, int> intersect(pair<int, int> a, pair<int, int> b)
{

    pair<int, int> c;

    if (a.second <= b.first || b.second <= a.first)
    {
        c.first = -1, c.second = -1;
        return c;
    }

    vector<int> vec;

    vec.push_back(a.first);
    vec.push_back(a.second);
    vec.push_back(b.first);
    vec.push_back(b.second);

    sort(vec.begin(), vec.end());

    c.first = vec[1], c.second = vec[2];

    return c;
}

int main()
{
    int M, N, O, P, m, n, o, i, j = 1, k = 1, num, val, count = 0, sum = 0;

    cin >> M;

    pair<int, int> a, b, c, d, p1, p2;
    int tc=1;
    while (M--)
    {
        if(tc>1)
        cout<<endl;
        tc++;

        cin >> a.first >> b.first >> a.second >> b.second;
        cin >> c.first >> d.first >> c.second >> d.second;

        p1 = intersect(a, c), p2 = intersect(b, d);

        if (p1.first != -1 && p1.second != -1 && p2.first != -1 && p2.second != -1)
        {
            cout << p1.first << " " << p2.first << " ";
            cout << p1.second << " " << p2.second << endl;
        }

        else
            cout << "No Overlap" << endl;
    }
}
