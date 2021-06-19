#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i,j,c=0;
        cin >> n;
        int arr[n];
        for(i=0;i<n;i++)
            cin >> arr[i];
        c=0;
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(arr[i]>arr[j])
                    c++;
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",c);

    }
}
