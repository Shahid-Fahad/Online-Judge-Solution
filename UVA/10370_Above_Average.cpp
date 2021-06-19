#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,i;
        double sum=0;
        cin >> n;
        double x[n];
        for(i=0;i<n;i++)
        {
            cin >> x[i];
            sum = sum+x[i];
        }
        double avg = sum/n;
        int c=0;
        for(i=0;i<n;i++)
        {
            if(x[i]>avg)
                c++;
        }
        double k = (c/double(n))*100;
        printf("%0.3lf%%\n",k);

    }
}
