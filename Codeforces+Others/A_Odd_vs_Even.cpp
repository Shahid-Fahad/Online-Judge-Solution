///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
const int MX = 1e7 + 123;
bitset<MX> seivearray;
vector<ll> siv;
void seive()
{
    
    for (ll i = 3; i <= sqrt(MX); i += 2)
    {
        if (seivearray[i] == 0)
        {
            for (ll k = (i * i); k <= MX; k += (i + i)) //k+=(i+i) to avoid even
            {
                seivearray[k] = 1;
            }
        }
    }
    siv.push_back(2);
    for (ll i = 3; i <= MX; i += 2)
        if (seivearray[i] == 0)
            siv.push_back(i);
}
vector<ll> fact;
bool primefact(ll n) // prime factorization
{
    if (n == 1)
        return 0;
    for (ll i = 0; i < siv.size(); i++)
    {
        if (siv[i] * siv[i] > n)
        {
            break;
        }
        while (n % siv[i] == 0)
        {
            fact.push_back(siv[i]);
            n /= siv[i];
        }
    }
    fact.push_back(n);
}
int NOD(int n)
{
    int sqrtn = sqrt(n);
    int res = 1;
    for (int i = 0; i < prime.size() && prime[i] <= sqrtn; i++)
    {
        if (n % prime[i] == 0)
        {
            int p = 0; // Counter for power of prime
            while (n % prime[i] == 0)
            {
                n /= prime[i];
                p++;
            }
            sqrtn = sqrt(n);
            p++;      // Increase it by one at end
            res *= p; // Multiply with answer
        }
    }
    if (n != 1)
    {
        res *= 2; // Remaining prime has power p^1. So multiply with 2/
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
