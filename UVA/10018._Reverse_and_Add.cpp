#include<bits/stdc++.h>
using namespace std;
string ssum(string a,string b)
{
    string x;
    if((b.size()>a.size()))
        swap(a,b);
    int sum=0,carry=0,k,i,j;
    for(i=b.size()-1,j=a.size()-1;i>=0;i--,j--)
    {
        sum  = (a[i]-48) + (b[i]-48) + carry;
        if(sum>=10)
        {
            carry = sum/10;
            k  = (sum%10)+48;
            x.push_back(k);
        }
        else
        {
            carry = 0;
            k  = (sum%10)+48;
            x.push_back(k);
        }

    }
    for(;j>=0;j--)
    {
        sum  = (a[j]-48) + carry;
        if(sum>=10)
        {
            carry = sum/10;
            k  = (sum%10)+48;
            x.push_back(k);
        }
        else
        {
            carry = 0;
            k  = (sum%10)+48;
            x.push_back(k);
        }

    }
    if(carry>0)
         x.push_back(carry+48);

    reverse(x.begin(),x.end());
    return x;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s,t;
        int it=0;
        cin >> s;
        while(1)

        {

            t=s;
            reverse(s.begin(),s.end());
            if(t==s)
                break;
            else
            {
                s = ssum(t,s);
                it++;
            }

        }
        cout << it  << " " << s << endl;
    }
}
