#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testCases int t;cin>>t;while(t--)
#define mod 1000000007
#define br "\n"
#define fo(i,n) for(int i=0;i<n;i++)
#define pb push_back
 
void solve()
{
    int n,a,b; cin>>n>>a>>b;
    if((n-a)<=b)cout<<(n-a)<<br;
    else cout<<b+1<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}