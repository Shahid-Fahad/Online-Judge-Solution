#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    cout << "I hate ";
    for(i=2;i<=n;i++)
    {
        if(i%2==1)
        cout << "that I hate ";
        if(i%2==0)
            cout << "that I love ";
    }
    cout << "it" << endl;
}

