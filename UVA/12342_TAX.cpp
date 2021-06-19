#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   long long int i,t,s;
    double tax;
    cin >> t;
    for(i=1;i<=t;i++)
    {
        cin >> s;
        if(s<=180000&&s>0)
            tax = 0;
        else if(s>180000 && s<=480000)
            tax = (s-180000) * 0.10;
        else if(s>480000 && s<=880000)
            tax = (300000*0.10) + (s-480000)*0.15;
        else if(s>880000 && s<=1180000)
            tax = (300000*0.10) + (400000*0.15) + (s-1180000)*0.20;
        else if(s>1180000)
            tax = (300000*0.10) + (400000*0.15) + (300000*0.20) + (s-1180000)*0.25;
        if(tax>0 && tax<2000)
            tax = 2000;

        cout << "Case " << i <<": "<< ceil(tax) << endl;
    }

    return 0;
}
