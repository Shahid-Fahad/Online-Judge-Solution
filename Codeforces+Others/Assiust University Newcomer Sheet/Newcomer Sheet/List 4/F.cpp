#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int i,sum=0;;
    for(i=0;i<a.size();i++)
    {
        sum = sum + (a[i]-48);
    }
    cout << sum << endl;
}
