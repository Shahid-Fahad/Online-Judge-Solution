#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,score=0;
    cin >> n;
    char s,dump;

    cin >> s;
    for(i=0; i<s.size();)
    {
        if(s=='Y')
        {
            s=s+s[i+1];
            cin >> dump;
            continue;
        }
        else if(s=='Z')
        {
            cin >> s
            if(s=='V')
            {
                score = score/5;
                cin >> dump;
            }
            else if(s=='W')
            {
                score = score/2;
                cin >> dump;
            }
            else
                i++;
            continue;
        }
        else if(s=='V')
        {
            score = score + 5;
            i++;
            continue;
        }
        else if(s=='W')
        {
            score = score + 2;
            i++;
            continue;
        }
        else  if(s=='X')
        {
            i=i+2;
            continue;
        }


    }
    cout << score << endl;
}
