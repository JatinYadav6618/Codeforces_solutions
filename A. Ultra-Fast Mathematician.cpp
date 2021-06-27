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
#define br
#define fo(i, n) for (int i = 0; i < n; i++)
#define pb push_back

void solve()
{
    string n, m;
    cin >> n >> m;
    vector<int> v1;
    fo(i,n.size()){
        v1.pb(n[i]^m[i]);
    }
    for(auto v2:v1){
        cout<<v2;
    }
    
}

int32_t main()
{
    fastIO
    // testCases
    solve();
}