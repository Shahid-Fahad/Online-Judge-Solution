///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
string sod(string n)
{
    ll sum=0;
    for(ll i=0;i<n.size();i++)
    {
        sum = sum + (n[i]-48);
    }
    string temp="";
    while(sum!=0)
    {
        char ch = ((sum%10)+'0');
        temp = temp + ch ;
        sum = sum/10;
    }

    return temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll c=0;
    while(s.size()>1)
    {
       s = sod(s);
        c++;
    }
    cout << c<< endl;

}
