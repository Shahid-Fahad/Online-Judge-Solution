#include <bits/stdc++.h>

using namespace std;

#define ll  long long

#define FastIO  ios_base::sync_with_stdio(false)

#define PI  acos(-1.0)

#define mod(a, b)   (((a) % (b)) + (b)) % (b)

#define sz(v)   (int) v.size()

#define MAX(a, b)   ((a) >= (b)) ? (a) : (b)

#define MIN(a, b)   ((a) <= (b)) ? (a) : (b)

#define all(v)  v.begin(), v.end()

#define vec_IN(v, N)    for(i = 0; i < (N); i++)                    \
                        {                                           \
                            cin >> num;                             \
                            v.push_back(num);                       \
                        }

#define set_IN(s, N)    for(i = 0; i < (N); i++)                    \
                        {                                           \
                            cin >> num;                             \
                            s.insert(num);                          \
                        }

#define OUT(v)  for(auto x: v)                                      \
                    cout << x << " ";

#define PAIR_OUT(v)  for(auto x: v)                                 \
                    cout << x.first << " " << x.second << endl;

#define vec_2D_IN(vec, M, N) for(i = 0; i < (M); i++)               \
                             {                                      \
                                vector <int> v;                     \
                                for(j = 0; j < (N); j++)            \
                                {                                   \
                                    cin >> num;                     \
                                    v.push_back(num);               \
                                }                                   \
                                vec.push_back(v);                   \
                             }

#define vec_2D_OUT(vec, M, N)    for(i = 0; i < (M); i++)           \
                                 {                                  \
                                    for(j = 0; j < (N); j++)        \
                                        cout << vec[i][j] << " ";   \
                                    cout << endl;                   \
                                 }

int doublecmp(double a, double b)
{
    if(fabs(a - b) <= 1e-10)
        return 0;

    else if(a > b)  return 1;

    else    return -1;
}

string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());

    reverse(str2.begin(), str2.end());

    int carry = 0;

    for (int i = 0; i < n1; i++)
    {
        int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);

        str.push_back(sum % 10 + '0');

        carry = sum / 10;
    }

    for (int i = n1; i < n2; i++)
    {
        int sum = ((str2[i] - '0') + carry);

        str.push_back(sum % 10 + '0');

        carry = sum/10;
    }

    if (carry)  str.push_back(carry + '0');

    reverse(str.begin(), str.end());

    return str;
}

string multiply(string a, string b)
{
    string r, t = "0", U;

    int num1, num2, val, carry = 0, k;

    reverse(a.begin(), a.end());

    reverse(b.begin(), b.end());

    for(int i = 0; a[i]; i++)
    {
        num1 = a[i] - '0';

        for(int j = 0; b[j]; j++)
        {
            num2 = b[j] - '0';

            carry += num1 * num2;

            r += (carry % 10) + '0';

            carry /= 10;
        }

        if(carry)
        {
            r += (carry % 10) + '0';

            carry /= 10;
        }

        reverse(r.begin(), r.end());

        t = findSum(t, r);

        U += t.back();

        t.pop_back();

        r = "";
    }

    reverse(t.begin(), t.end());

    U += t;

    reverse(U.begin(), U.end());

    return U;
}

bool isSmaller(string str1, string str2)
{
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)    return true;

    if (n2 < n1)    return false;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;

    return false;
}

string binaryfy(int num)    {

    string a;

    while(num)    {

        if(num % 2)   a += '1';
        else    a += '0';

        num /= 2;
    }

    reverse(a.begin(), a.end());

    return a;
}

ll toThePower(ll a, ll b)
{
    if(!b)  return 1;

    ll x = a;

    for(ll i = 1; i < b; i++)
        a *= x;

    return a;
}

pair <int, int> intersect(pair <int, int> a, pair <int, int> b) {

    pair <int, int> c;

    if(a.second <= b.first || b.second <= a.first)  {
        c.first = -1, c.second = -1;
        return c;
    }

    vector <int> vec;

    vec.push_back(a.first);
    vec.push_back(a.second);
    vec.push_back(b.first);
    vec.push_back(b.second);

    sort(vec.begin(), vec.end());

    c.first = vec[1], c.second = vec[2];

    return c;
}

bool comp(pair <int, int> a, pair <int, int> b) {

    if(a.first == b.first)  {
        return a.second <= b.second;
    }

    return a.first > b.first;
}

void solve()    {

    ll M, N, O, P, m, n, o, p, q, r, i, j, k, count = 0, sum = 0, val, min = INT_MAX;

    bool f = false;

    string a, b;

    vector <string> vec;

    cin >> M >> N;

    for(i = 1; i <= M / 2; i++) {
        if(i % 2)   {
            a += "1 0 ";
            b += "0 1 ";
        }

        else    {
            a += "0 1 ";
            b += "1 0 ";
        }
    }

    for(i = 1; i <= N; i++) {
        if(!(i % 4))    vec.push_back(a);
        else if(!(i % 3))    vec.push_back(b);
        else if(!(i % 2))    vec.push_back(b);
        else    vec.push_back(a);
    }

    for(auto X : vec)   {
        cout << X << endl;
    }
}

int main()
{
    ll M, N, O, P, m, n, o, p, q, r, i, j, k, num, val = 0, count = 0, sum = 0;

    string a = "YES", b = "NO", c, d, e;

    cin >> M;

    while(M--)  {
        solve();
    }
}
