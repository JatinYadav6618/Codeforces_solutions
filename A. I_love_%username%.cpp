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
    int a[n];
    fo(i,n){
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    int count=0;
    fo(i,n){
        if(max<a[i]){
            max=a[i];
            count++;
        }
        else if(min>a[i]){
            min=a[i];
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