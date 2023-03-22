///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
unsigned ll f(unsigned ll n)
{
    if (n == 0)
        return 1;
    return n*f(n - 1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i;
    cin >> t;
    for(i=1; i<=t; i++)
    {
        cout << "Case " << i << ": ";
        ll n,j;
        cin >> n;
        ll imp=5,impc=0,f=0,k=5;
        while(1)
        {
            if(n==imp)
            {
                cout << "impossible" << endl;
                f++;
                impc++;
                break;
            }
            if(n<imp)
                break;
            else if (n>imp)
            {
                impc++;
                //cout << "impos count " << impc << " " << imp  <<" " << n<< endl;
                /*if((impc+1)%6==0&&(impc+1)%5==0&&impc!=0)
                {
                    imp++;
                    //k++;
                }*/

                if((impc%6==0)&&(impc%5==0)&&impc!=0)
                {
                    imp++;
                    //k++;
                    //cout << "h" << endl;
                }
              else if((impc+1)%6==0&&impc!=0)
                {
                    imp++;
                   //k++;
                    //cout << "ekhane" << endl;
                }
                else
                    imp = imp+6;
            }
            /*if(impc%5==0)
            {
                //cout << " dhukse " << imp << endl;
                impc++;
               if(impc%6==0)
               {
                   cout << "impossible" << endl;
                   f++;
                   break;
               }
            }*/
            //cout << "i: " << imp << endl;

        }
        //cout << "impossible count " << impc << endl;
        //cout << "after br impos count " << impc << " " << imp  <<" " << n<< endl;
        if(f==0)
            cout << (n*5)-(5*impc) << endl;
    }
}

