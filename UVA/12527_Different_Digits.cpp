#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin >> a >> b)
    {
        int i,j;
        int arr[10]= {0};
        int f=0;
        for(i=a; i<=b; i++)
        {
            int temp = i;
            while(temp!=0)
            {
                arr[(temp%10)]++;
                temp = temp/10;
            }
            int cnt=0;
            for(j=0; j<10; j++)
            {
                if(arr[j]>1)
                {
                    f++;
                    break;
                }
            }
            fill_n(arr,10,0);
        }
        cout << b-a-f+1 << endl;
    }
}
