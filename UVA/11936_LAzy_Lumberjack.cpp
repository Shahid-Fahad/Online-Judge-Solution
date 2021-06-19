#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[10],j,k,l;
    cin >> n;
        cout << "Lumberjacks:" <<endl;
    for(int i=1;i<=n;i++)
    {

        int c=0,p=0;
        for(j=0;j<10;j++)
        {
            cin >> arr[j];
        }
        for(l=0;l<10;l++)
        {
            if(l<=8)
            {if(arr[l]>=arr[l+1])
            {
                c=0;
            }
            else
                {c++;
                break;
                }}

        }
        for(k=0;k<10;k++)
        {
            if(k<=8)
            {if(arr[k]<=arr[k+1])
            {
                p=0;
            }
            else
                {p++;
                break;}}

        }

            if(c==0||p==0)
            cout << "Ordered" << endl;
            else
            cout << "Unordered" << endl;

    }
    return 0;

}
