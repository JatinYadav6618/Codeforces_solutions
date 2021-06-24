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

int checkal(string s)
{
    int c=0;
    int c2=0;
    fo(i, s.size())
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            c++;
        }
        else
        {
            c2++;
        }
    }
    if (c > c2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void solve()
{
    string word;
    cin >> word;
    if (checkal(word) == 1)
    {
        fo(i, word.size())
        {
            if (word[i] >= 'a' && word[i] <= 'z')
            {
                word[i] -= 32;
            }
        }
    }
    if (checkal(word) == 0)
    {
        fo(i, word.size())
        {
            if (word[i] >= 'A' && word[i] <= 'Z')
            {
                word[i] += 32;
            }
        }
    }
    cout << word << br;
}

int32_t main()
{
    fastIO
    // testCases
    solve();
}