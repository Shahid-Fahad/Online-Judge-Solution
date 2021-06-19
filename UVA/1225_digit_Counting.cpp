#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin >> n;
    while(n--)
    {
        int a,i,b,c;
        int arr[10]= {0};
        cin >> a;
        for(i=1; i<=a; i++)
        {
            b = i;
            while(b!=0)
            {
                c = b%10;
                arr[c]++;
                b = b/10;
            }

        }
        for(i=0; i<=9; i++)
        {
            cout << arr[i];
            if(i<9)
                cout << " ";
        }

        cout << endl;


    }
}
