#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        int arr[n];

        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
        sort(arr,arr+n);
        for(int i=0; i<n; i++)
        {
            printf("%d",arr[i]);
            if(i!=n-1)
                printf(" ");
        }
        printf("\n");
    }
}
