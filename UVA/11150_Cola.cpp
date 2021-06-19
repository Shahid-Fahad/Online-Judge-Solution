#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int k = n;
       while(k>0)
       {
           k = k-3;
           k++;
           if(k>=0)
            n++;
       if(k==2)
            k++;
       }
       cout << n << endl;
    }
}
