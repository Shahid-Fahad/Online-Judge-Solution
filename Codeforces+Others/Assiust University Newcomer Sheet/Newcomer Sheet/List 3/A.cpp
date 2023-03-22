#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
   long long int x,sum=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> x;
        sum = sum + x;
    }
    cout << abs(sum) << endl;
    return 0;
}
