#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
    int t;
    cin >> t;
    while(t--)
    {
        int i;
        string s1,s2;
        cin >> s1 >> s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        string s3 = snsum(s1,s2);

        reverse(s3.begin(),s3.end());

        for(i=0; i<s3.size(); i++)
        {
            if(s3[i]!='0')
                break;
        }
        while(i<s3.size())
        {
            cout << s3[i];
            i++;
        }
        cout << endl;
    }
}
