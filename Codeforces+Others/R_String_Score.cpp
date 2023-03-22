///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
int main()
{
    string s;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>  n;
    cin >> s;
    int i, sc = 0,k=0;
    for (i = 0; i < s.size(); i++)
    {
       k++;
        if (s[i] == 'V')
        {
            sc = sc + 5;
        }
        else if (s[i] == 'W')
        {
            sc = sc + 2;
        }
        else if (s[i] == 'X' && i != s.size() - 1)
        {
           i++;
        }
        else if (s[i] == 'Y' && i != s.size() - 1)
        {
            s.push_back(s[i + 1]);
            i++;
        }
        else if (s[i] == 'Z' && i != s.size() - 1)
        {
            if (s[i + 1] == 'V')
            {
                sc = sc / 5;
                i++;
            }
            else if (s[i+1] == 'W')
            {
                sc = sc / 2;
                i++;
            }
            
        }
        
    }
    
    cout << sc << endl;
}
