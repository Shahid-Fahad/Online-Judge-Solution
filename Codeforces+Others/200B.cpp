#include<bits/stdc++.h>
using namespace std;
int main()
{
   double n,x,k;
    cin >> n;
    k=n;
   double sum=0;
    while(n--)
    {
        cin >> x;
        sum = sum+x;
    }
    printf("%0.12lf\n",sum/k);
}
