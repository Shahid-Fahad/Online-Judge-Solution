#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,arr[5][5],p,q,m=0;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
                p=i,q=j;
        }
    }
    while(1)
    {
        if(p>2)
        {
            p--;
            m++;
        }
        else if(p<2)
        {
            p++;
            m++;
        }
        if(p==2&&q==2)
            break;
        if(q>2)
        {
            q--;
            m++;
        }
        else if(q<2)
        {
            q++;
            m++;
        }
         if(p==2&&q==2)
            break;
    }
    cout << m << endl;
}
