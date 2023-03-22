///ShzFahad
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j;
    
    while(cin >> n)
    {
        if(n==0)
        break;
        vector<vector<ll>>v;
        for(i=0;i<n;i++)
        {
            vector<ll>temp;
            ll d,m,y,c;
            cin >> d >> m >> y >> c;
            temp.push_back(d);
            temp.push_back(m);
            temp.push_back(y);
            temp.push_back(c);

            v.push_back(temp);
        }
        ll dc=0,cc=0;
         ll pd=v[0][0],pm=v[0][1],py=v[0][2],pc=v[0][3];
        for(i=1;i<n;i++)
        {
           ll d=v[i][0],m=v[i][1],y=v[i][2],c=v[i][3];
           if(py==y)
           {
               if(pm==m)
               {
                   if(d-pd==1)
                   {
                       dc++;
                       cc = cc+(c-pc);
                   }
               }
               else if(m-pm==1)
               {
                   if((pm==1||pm==3||pm==5||pm==7||pm==8||pm==10||pm==12)&&(pd==31)&&(d==1))
                   {
                        dc++;
                       cc = cc+(c-pc);
                   }
                   else
                   {
                       if((py%400==0)||(py%4==0&&py%100!=0))
                       {
                           if(pm==2&&pd==29&&d==1)
                           {
                                dc++;
                                cc = cc+(c-pc);
                           }
                            else if((pd==30&&d==1)&&(pm==4||pm==6||pm==9||pm==11))
                           {
                                dc++;
                                cc = cc+(c-pc);
                           }

                       }
                       else
                       {
                            if(pm==2&&pd==28&&d==1)
                           {
                                dc++;
                                cc = cc+(c-pc);
                           }
                           else if((pd==30&&d==1)&&(pm==4||pm==6||pm==9||pm==11))
                           {
                                dc++;
                                cc = cc+(c-pc);
                           }
                       }
                       
                   }
                   
               }
               
           }
           else if(y-py==1)
           {
               if((pd==31&&pm==12)&&(d==1&&m==1))
               {
                            dc++;
                            cc = cc+(c-pc);
               }
           }
           swap(pd,d),swap(pm,m),swap(py,y),swap(pc,c);
        }
        cout << dc << " " << cc << endl;
    }

}
