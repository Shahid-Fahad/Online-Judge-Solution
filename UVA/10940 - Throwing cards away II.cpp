#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n==1)
        {cout << 1 << endl;
        continue;}
        if(n==0)
            break;
        vector<int>cards;
        int i,x;
        for(i=1;i<=n;i++)
        {
            cards.push_back(i);
        }
        int t=0;
        while(t!=(n-2))
        {
            t++;
        }
        cout << cards[1] << endl;

    }
}
