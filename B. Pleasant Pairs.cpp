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
    int arr[n];
    fo(i,n){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n-1;i++){
        for(int j=1;j<n;j++){
            if(i<j && arr[i]*arr[j]==((i+1)+(j+1))){
                count++;
            }
        }
    }
    cout<<count<<br;
}
 
int32_t main()
{
 fastIO
testCases 
 solve();
}