///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
vector<string>v;
ll b(string s)
{
    string k;
    ll balancer  = 0,l=0,r,j;
    ll counter = 0;
    for(ll i=0; i<s.length(); i++)
    {
        if(s[i] == 'L')
        {
            balancer ++;
        }
        else
        {
            balancer --;
        }
        if(balancer == 0)
        {
            string u="";
            for(j=l; j<=i; j++)
            {
                u.push_back(s[j]);
            }
            v.push_back(u);
            l = j;

            counter ++;
        }
    }
    return counter;
}
int main()
{
    ll l,i,j,k;
    string s;
    cin >> s;
    cout <<b(s) << endl;
    for(i=0; i<v.size(); i++)
        cout <<v[i] << endl;


}
