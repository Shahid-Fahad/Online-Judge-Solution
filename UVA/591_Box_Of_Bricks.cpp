#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,n,i;
    while(cin >> n)
    {
        if(n==0)
            break;
       int arr[n];
       int sum=0;
       for(i=0;i<n;i++)
        {
            cin >> arr[i];
            sum = sum + arr[i];
        }
        double avg  = sum/n;
        int sum2=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]>avg)
                sum2 = sum2+(arr[i]-avg);
        }
        t++;
        cout << "Set #" << t << endl;
        cout << "The minimum number of moves is " <<sum2  << "."<< endl<<endl;

    }
}
