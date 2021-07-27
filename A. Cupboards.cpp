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
    vector<int>l;
    vector<int>r;
    fo(i,n){
        int l1,r1; cin>>l1>>r1;
        l.pb(l1);
        r.pb(r1);
    }
    int count0=0;
    int count1=0;
    fo(i,n){
        if(l[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }
    int ans=0;
    if(count0<count1){
        ans+=count0;
    }
    else{
        ans+=count1;
    }
    count0=0;
    count1=0;
    fo(i,n){
        if(r[i]==0){
            count0++;
        }
        else{
            count1++;
        }
    }
    if(count0<count1){
        ans+=count0;
    }
    else{
        ans+=count1;
    }

    cout<<ans<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}