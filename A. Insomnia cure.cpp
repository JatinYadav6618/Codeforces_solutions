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
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    int count=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            count++;
        }
    }
    cout<<count<<br;
}

int32_t main()
{
    fastIO
    // testCases
    solve();
}