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
    vector<int> in;
    vector<int> out;
    fo(i,n){
        int x,y;cin>>x>>y;
        in.pb(x);
        out.pb(y);
    }
    int total=0;
    vector<int> present;
    fo(i,n){
        if(i==0){
            total=in[i]+out[i];
            present.pb(total);
        }
        else{
            total=abs(in[i]-present[i-1])+out[i];
            present.pb(total);
        }
    }
   
    fo(i,n){
        if(i==0){
            total=in[i]+out[i];            
        }
        else if(total<abs(in[i]-present[i-1])+out[i]){
            total=abs(in[i]-present[i-1])+out[i];
        }
    }

    cout<<total<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}