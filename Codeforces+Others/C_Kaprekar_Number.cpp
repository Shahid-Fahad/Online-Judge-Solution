///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
        return true;
    if (n2 < n1)
        return false;

    for (int i = 0; i < n1; i++)
        if (str1[i] < str2[i])
            return true;
        else if (str1[i] > str2[i])
            return false;

    return false;
}

// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i = 0; i < n2; i++)
    {
        // Do school mathematics, compute difference of
        // current digits

        int sub = ((str1[i] - '0') - (str2[i] - '0') - carry);

        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of larger number
    for (int i = n2; i < n1; i++)
    {
        int sub = ((str1[i] - '0') - carry);

        // if the sub value is -ve, then make it positive
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // reverse resultant string
    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, f;
    ll n;
    cin >> s >> n;
    while (n--)
    {
        string t1 = s, t2 = s;
        sort(t1.begin(), t1.end());
        t2 = t1;
        reverse(t2.begin(), t2.end());
        s = findDiff(t2, t1);
        ll f = 0;
        string x;
        for (ll i = 0; i < s.size(); i++)
        {
            if(s[i]!='0'&&i==0)
            {
                x=s;
                break;
            }
            if (s[i] == '0' && f == 0)
            {
                f = 1;
                continue;
            }
            if (f == 1)
                x.push_back(s[i]);
        }
       // cout << "TEst " << x << endl;

        s = x;
        if(s=="0")
        break;
    }
    cout << s << endl;
}
