///ShzFahad
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
ll A(vector<ll> v)
{
    ll arr[7 + 5];
    for (ll i = 1; i <= v.size(); i++)
        arr[i] = v[i - 1];
    ll s = 0;
    for (ll i = 1; i < v.size(); i++)
    {
        for (ll j = 1; j <= v.size(); j++)
        {
            if (arr[j] == i)
            {
                reverse(arr + i, arr + j + 1);
                s = s + abs(j - i) + 1;
                break;
            }
        }
    }
    return s;
}
vector<vector<ll>> vm;
template <typename T>
class AllPermutation
{
private:
    // The input array for permutation
    const T *Arr;

    // Length of the input array
    const int Length;

    // Index array to store indexes of input array
    int *Indexes;

    // The index of the first "increase"
    // in the Index array which is the smallest
    // i such that Indexes[i] < Indexes[i + 1]
    int Increase;

public:
    // Constructor
    AllPermutation(T *arr, int length)
        : Arr(arr), Length(length)
    {
        this->Indexes = nullptr;
        this->Increase = -1;
    }

    // Destructor
    ~AllPermutation()
    {
        if (this->Indexes != nullptr)
        {
            delete[] this->Indexes;
        }
    }

    // Initialize and output
    // the first permutation
    void GetFirst()
    {

        // Allocate memory for Indexes array
        this->Indexes = new int[this->Length];

        // Initialize the values in Index array
        // from 0 to n - 1
        for (int i = 0; i < this->Length; ++i)
        {
            this->Indexes[i] = i;
        }

        // Set the Increase to 0
        // since Indexes[0] = 0 < Indexes[1] = 1
        this->Increase = 0;

        // Output the first permutation
        this->Output();
    }

    // Function that returns true if it is
    // possible to generate the next permutation
    bool HasNext()
    {

        // When Increase is in the end of the array,
        // it is not possible to have next one
        return this->Increase != (this->Length - 1);
    }

    // Output the next permutation
    void GetNext()
    {

        // Increase is at the very beginning
        if (this->Increase == 0)
        {

            // Swap Index[0] and Index[1]
            this->Swap(this->Increase, this->Increase + 1);

            // Update Increase
            this->Increase += 1;
            while (this->Increase < this->Length - 1 && this->Indexes[this->Increase] > this->Indexes[this->Increase + 1])
            {
                ++this->Increase;
            }
        }
        else
        {

            // Value at Indexes[Increase + 1] is greater than Indexes[0]
            // no need for binary search,
            // just swap Indexes[Increase + 1] and Indexes[0]
            if (this->Indexes[this->Increase + 1] > this->Indexes[0])
            {
                this->Swap(this->Increase + 1, 0);
            }
            else
            {

                // Binary search to find the greatest value
                // which is less than Indexes[Increase + 1]
                int start = 0;
                int end = this->Increase;
                int mid = (start + end) / 2;
                int tVal = this->Indexes[this->Increase + 1];
                while (!(this->Indexes[mid]<tVal
                         &&this->Indexes[mid - 1]>
                         tVal))
                {
                    if (this->Indexes[mid] < tVal)
                    {
                        end = mid - 1;
                    }
                    else
                    {
                        start = mid + 1;
                    }
                    mid = (start + end) / 2;
                }

                // Swap
                this->Swap(this->Increase + 1, mid);
            }

            // Invert 0 to Increase
            for (int i = 0; i <= this->Increase / 2; ++i)
            {
                this->Swap(i, this->Increase - i);
            }

            // Reset Increase
            this->Increase = 0;
        }
        this->Output();
    }

private:
    // Function to output the input array
    void Output()
    {
        vector<ll> t1;
        for (int i = 0; i < this->Length; ++i)
        {

            // Indexes of the input array
            // are at the Indexes array
            t1.push_back(this->Arr[this->Indexes[i]]);
        }
        vm.push_back(t1);
    }

    // Swap two values in the Indexes array
    void Swap(int p, int q)
    {
        int tmp = this->Indexes[p];
        this->Indexes[p] = this->Indexes[q];
        this->Indexes[q] = tmp;
    }
};
vector<pair<ll, vector<ll>>> mmp;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    ll tc = 0;
    while (t--)
    {
        mmp.clear();
        vm.clear();
        ll n, k;
        cin >> n >> k;
        tc++;
        ll arr[n];
        for (ll i = 0; i < n; i++)
        {
            arr[i] = i + 1;
        }
        AllPermutation<ll> perm(arr, sizeof(arr) / sizeof(ll));
        perm.GetFirst();
        while (perm.HasNext())
        {
            perm.GetNext();
        }
        for (ll i = 0; i < vm.size(); i++)
        {
            vector<ll> tmp;
            tmp = vm[i];
            ll x = A(tmp);
            mmp.push_back(make_pair(x, vm[i]));
        }
        cout << "Case #" << tc << ": ";
        ll u = (n * (n + 1)) / 2 - 1;
        if (k < (n - 1) || k > u)
            cout << "IMPOSSIBLE" << endl;
        else
        {
            ll f = 0;
            for (ll i = 0; i < mmp.size(); i++)
            {
                if (mmp[i].first == k)
                {
                    if (mmp[i].second.size() == n)
                    {
                        for (ll j = 0; j < mmp[i].second.size(); j++)
                        {
                            cout << mmp[i].second[j] << " ";
                        }
                        cout << endl;
                        f = 1;
                        break;
                    }
                }
                if (f == 1)
                    break;
            }
            if (f == 0)
            {
                cout << "IMPOSSIBLE" << endl;
            }
        }
    }
}
