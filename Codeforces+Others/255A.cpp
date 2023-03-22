///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll n,i,ch=0,bc=0,bk=0,x;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        cin >> x;
        if(i%3==1)
            ch = ch+x;
        else if(i%3==2)
            bc = bc+x;
        else
            bk = bk+x;
    }
    if(ch>bc&&ch>bk)
        cout << "chest" << endl;
    else if(bc>ch&&bc>bk)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
}
