#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define ff first
#define ss second
#define int long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii map<int, int>
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define setbits(x) __builtin_popcountll(x)
#define zrobits(x) __builtin_ctzll(x)
#define mod 1000000007
#define inf 1e18
#define ps(x, y) fixed << setprecision(y) << x
#define mk(arr, n, type) type *arr = new type[n];
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void c_p_c()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
const int n = 1e6 + 5;
vector<int> Spf(n, 1);

int32_t main()
{ // Sieve of Eratosthenes
    Spf[0] = 0;
    Spf[1] = 0;
    for (int i = 2; i < n; i++)
    {
        Spf[i] = i;
    }
    for (int i = 2; i < n; i++)
    {

        if (Spf[i] == i)

        {
            for (int j = i * i; j < n; j += i)
            {
                if (Spf[j] == j)
                    Spf[j] = i;
            }
        }
    }

    c_p_c();
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (Spf[i])
            cout << i << "->" << Spf[i] << " " << endl;
    }
    cout << endl;
    return 0;
}
