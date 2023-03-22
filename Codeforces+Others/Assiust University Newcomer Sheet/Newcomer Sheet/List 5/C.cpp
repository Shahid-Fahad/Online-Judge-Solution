#include<bits/stdc++.h>
using namespace std;
int eo(long long int a)
{
if(a%2==1)
    return 1;
else
    return 0;
}
int pal(long long int a)
{
    int i;
    vector<int>v,x;
    int temp1,temp2=0,rem;
    temp1 = a;
    while(temp1!=0)
    {
        rem = temp1%2;
        v.push_back(rem);
        temp1 = temp1/2;
    }
    x = v;
    reverse(v.begin(),v.end());
    if(v==x)
        return 1;
    else
        return 0;



}
int main()
{
    long long int a;
    cin >> a;
    if(eo(a)&&pal(a))
    cout << "YES" << endl;
    else
        cout << "NO" << endl;
}


