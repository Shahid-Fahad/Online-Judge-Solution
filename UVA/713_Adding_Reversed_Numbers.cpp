///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
string snsum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";

    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if(carry)
    str.push_back(carry+'0');

    reverse(str.begin(), str.end());
    return str;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        string x,y;
        cin >> x >> y;
        reverse(x.begin(),x.end());
        reverse(y.begin(),y.end());
        for(ll i=0;i<x.size();i++)
        {
            ll k = x[i]-48;
            if(k>0)
            {
                x = x.substr(i,x.size());
                break;
            }
        }
        for(ll i=0;i<y.size();i++)
        {
            ll k = y[i]-48;
            if(k>0)
            {
                y = y.substr(i,y.size());
                break;
            }
        }
       string z = snsum(x,y);
       reverse(z.begin(),z.end());
        for(ll i=0;i<z.size();i++)
        {
            ll k = z[i]-48;
            if(k>0)
            {
                z = z.substr(i,z.size());
                break;
            }
        }
        cout << z << endl;
    }

}
