///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--)
    {
        ll n,m,a,d,sum=0,z;
        cin >> n >> m >> a >> d;
        ll b=a+d,c=a+(2*d),e=a+(4*d);
        d=a+(3*d);
        double l,r,p,x;
        l = ceil(n/(a+0.0))*a+0.0;
        r = floor(m/(a+0.0))*a+0.0;
        x =(r/a)-(l/a)+1;
        sum = sum+x;
        if(1)
        {

            l = ceil(n/(b+0.0))*b+0.0;
            r = floor(m/(b+0.0))*b+0.0;
            x =(r/b)-(l/b)+1;
            sum = sum+x;
            p = p-x;
            ///
            l = ceil(n/(c+0.0))*c+0.0;
            r = floor(m/(c+0.0))*c+0.0;
            x =(r/c)-(l/c)+1;
            sum = sum+x;
            ///
            l = ceil(n/(d+0.0))*d+0.0;
            r = floor(m/(d+0.0))*d+0.0;
            x =(r/d)-(l/d)+1;
            sum = sum+x;
            ///
            l = ceil(n/(e+0.0))*e+0.0;
            r = floor(m/(e+0.0))*e+0.0;
            x =(r/a)-(l/a)+1;
            sum = sum+x;
            ///---///---///---///
            ///---///---///---///
            z = a*b;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
           z = a*c;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " --" << x << endl;
            sum = sum-x;
            ///---///---///---///
           z = a*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
           z = a*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = b*c;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = b*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = b*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = c*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = c*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = a*b*c*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = a*b*c*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = a*b*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = a*c*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = b*c*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum-x;
            ///---///---///---///
            z = a*b*c*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = a*b*c;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = a*b*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = a*b*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = a*c*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = a*c*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = a*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = b*c*d;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = b*c*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = b*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
             z = c*d*e;
            l = ceil(n/(z+0.0))*z+0.0;
            r = floor(m/(z+0.0))*z+0.0;
            x =(r/z)-(l/z)+1;cout << z << " " << x << endl;
            sum = sum+x;
            ///---///---///---///
        }
        cout << sum << endl;

    }

}

