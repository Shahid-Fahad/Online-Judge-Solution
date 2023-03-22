#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,sum=0;
    cin >> n >> d;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        sum = sum +x ;
    }
    int k = sum+((n-1)*10);
    if(k>d)
       cout << "-1" << endl;
    else
    {
        cout << (d-sum)/5 << endl;
    }
}
