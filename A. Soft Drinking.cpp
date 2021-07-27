#include<bits/stdc++.h>
#include<algorithm>
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
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int ml=(k*l/nl);
    int limes=c*d;
    int salt=p/np;
    int ans=min({ml,limes,salt});
    cout<<ans/n<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}