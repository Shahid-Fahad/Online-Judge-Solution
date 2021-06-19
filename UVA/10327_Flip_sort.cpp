#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int i,j,c=0;
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
        printf("Minimum exchange operations : %d\n",c);

    }
}
