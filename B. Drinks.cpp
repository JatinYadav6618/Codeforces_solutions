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
    int n; cin>>n;
    int ele;
    double sum=0;
    for(int i=1;i<=n;i++){
        cin>>ele;
        sum+=ele;
    }
    cout<<fixed<<setprecision(12)<<double(sum/n)<<br;

}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}