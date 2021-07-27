//*********************
//**  Author-JATIN   **
//*********************
 
#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define testCases int t;cin>>t;while(t--)
#define mod 1000000007
#define br "\n"
#define fo(i,n) for(int i=0;i<n;i++)
#define fo1(i,n) for(int i =1;i<=n;i++)
#define vec vector<int>
#define pb push_back
#define MAXT *max_element(a.begin(),a.end())
#define MINT *min_element(a.begin(),a.end())
 
void solve()
{
    int n,m; cin>>n>>m;
    vec v(m);
    fo(i,m){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int min=INT_MAX;
    fo(i,m){
        if((i+(n-1))>m){
            break;
        }
        if(abs(v[i]-v[i+(n-1)])<min){
            min=abs(v[i]-v[i+(n-1)]);
        }
    }
    cout<<min<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}