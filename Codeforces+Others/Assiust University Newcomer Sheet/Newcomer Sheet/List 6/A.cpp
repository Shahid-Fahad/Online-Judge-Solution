#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x,i;
    cin >> x;
   if(x==1)
    {cout << "YES" << endl;
    return 0;}
   while(x!=1)
   {
       if(x%2==1)
       {
           cout << "NO" << endl;
           return 0;
       }
       x = x/2;
   }
    cout << "YES" << endl;

}
