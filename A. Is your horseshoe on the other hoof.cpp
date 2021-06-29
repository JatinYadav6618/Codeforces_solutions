#include<bits/stdc++.h>
#include<unordered_set>
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    set<int> x;
    x.insert(a);
    x.insert(b);
    x.insert(c);
    x.insert(d);

    cout<<(4-x.size())<<br;


}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}