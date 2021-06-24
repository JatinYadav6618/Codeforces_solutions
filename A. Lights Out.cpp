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
    int in[3][3];
    int ans[3][3];
    fo(i, 3)
    {
        fo(j, 3)
        {
            cin >> in[i][j];
        }
    }
    fo(i, 3)
    {
        fo(j, 3)
        {
            ans[i][j] = 1;
        }
    }
    fo(i, 3)
    {
        fo(j, 3)
        {
            if (in[i][j] % 2 != 0)
            {
                if (ans[i][j] == 0)
                {
                    ans[i][j] = 1;
                }
                else
                {
                    ans[i][j] = 0;
                }
                if (i + 1 < 3)
                {
                    if (ans[i + 1][j] == 0)
                    {
                        ans[i + 1][j] = 1;
                    }
                    else
                    {
                        ans[i + 1][j] = 0;
                    }
                }
                if (j + 1 < 3)
                {
                    if (ans[i][j + 1] == 0)
                    {
                        ans[i][j + 1] = 1;
                    }
                    else
                    {
                        ans[i][j + 1] = 0;
                    }
                }
                if (i - 1 >= 0)
                {
                    if (ans[i - 1][j] == 0)
                    {
                        ans[i - 1][j] = 1;
                    }
                    else
                    {
                        ans[i - 1][j] = 0;
                    }
                }
                if (j - 1 >= 0)
                {
                    if (ans[i][j - 1] == 0)
                    {
                        ans[i][j - 1] = 1;
                    }
                    else
                    {
                        ans[i][j - 1] = 0;
                    }
                }
            }
        }
    }
    fo(i, 3)
    {
        fo(j, 3)
        {
            cout << ans[i][j];
        }
        cout << br;
    }
}

int32_t main()
{
    fastIO
    // testCases
    solve();
}