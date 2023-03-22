#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n,i,c=0;
   cin >> n;
   int arr[n];
   for(i=0;i<n;i++)
    cin >> arr[i];

   for(i=0;i<n;i++)
    {
        if(i==0)
        {
            if(arr[i+1]^arr[n-1]!=arr[i])
                {
                    c=1;
                    break;
                }
        }
       else if(i==n-1)
        {
            if(arr[i-1]^arr[0]!=arr[i])
                {
                    c=1;
                    break;
                }
        }
        else
        {
            if(arr[i-1]^arr[i+1]!=arr[i])
                {
                    c=1;
                    break;
                }
        }


    }
    if(c==1)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}
