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
    int n,k; cin>>n>>k;
    int a[n];
    int count{};
    fo(i,n){
        cin>>a[i];
    }
    int x=a[k-1];
    if(x==0){
        fo(i,n){
            if(a[i]>0){
                count++;
            }
        }
        cout<<count<<br;
        return;
    }
    fo(i,n){
        if(x<=a[i]){
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