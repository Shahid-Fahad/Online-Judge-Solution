///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll sum,arr[1000],n;
int f(int pos,int cur_sum)
{
    //cout << "POSITION " << pos << " " << cur_sum  << endl;
    if(pos==n-1)
    {
        //cout << "ASI " << " " << cur_sum  <<  endl;
        if(cur_sum==sum)
            return 1;
        else
            return 0;
    }
   ll a =  f(pos+1,cur_sum+arr[pos+1]);
   ll b = f(pos+1,cur_sum-arr[pos+1]);

   return a||b;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >>sum;
    for(ll i=0;i<n;i++)
        cin >> arr[i];

    if (f(0,arr[0]))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}
