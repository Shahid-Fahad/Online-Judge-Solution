#include<bits/stdc++.h>
using namespace std;
int main()
{
    string q;
    int n,o,i;
    cin >> n >> o >> q;
    int x = 0;
    while(o--)
    {
        for(i=0; i<q.size(); i++)
        {
            if(q[i]=='B'&&q[i+1]=='G')
            {
                swap(q[i+1],q[i]);
                i++;
            }
        }
    }
    cout << q << endl;

}
