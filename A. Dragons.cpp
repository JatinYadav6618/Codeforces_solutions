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
    int s, n; cin>>s>>n;
    int a=n;
    vector<pair<int,int>>v;
    fo(i,a){
        int x, y; cin>>x>>y;
        v.pb(make_pair(x,y));
    }
    sort(v.begin(),v.end());

    fo(i,a){
        if(s>v[i].first){
            s+=v[i].second;
            n--;
        }
    }
    if(n>0){
        cout<<"NO"<<br;
    }
    else{
        cout<<"YES"<<br;
    }
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}