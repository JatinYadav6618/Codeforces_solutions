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
#define fo1(i,n) for(int i =1;i<=n;++i)
#define vec vector<int>
#define pb push_back
 
void solve()
{
    int n; cin>>n;
    int a[n];   
    int fingers=0;
    fo(i,n){
        cin>>a[i];
        fingers+=a[i];
    }
    int count=0;
    fo1(i,5){
        if(((fingers+i)%(n+1)!=1 )){
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