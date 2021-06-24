#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define testCases \
    int t;        \
    cin >> t;     \
    while (t--)
#define mod 1000000007
#define br "\n"
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb push_back

void solve()
{
    int x;
    cin >> x;
    int count=0;
    vector<int> v;
    while (x!=0)
    {
        v.pb(x % 10);
        x /= 10;
    }
    fo(i, v.size())
    {
        if (v[i] == 4 || v[i] == 7)
        {
            count++;
        }
    }
    if (count==4 || count==7)
    {
        cout << "YES" << br;
    }
    else
    {
        cout << "NO" << br;
    }
}

int32_t main()
{
    fastIO
        // testCases
        solve();
}