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
    int arr[5][5];
    fo(i,5){
        fo(j,5){
            cin>>arr[i][j];
        }
        cout<<br;
    }
    int ans=0;
    fo(i,5){
        fo(j,5){
            if(arr[i][j]==1){
                ans=abs(2-i)+abs(2-j);
            }
        }
    }
    cout<<ans<<br;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}
