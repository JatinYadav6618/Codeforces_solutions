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
 
void solve()
{
    int n,m,pos; cin>>n>>m;
    double ele,max{};
    fo1(i,n){
        cin>>ele;
        if(max<=ceil(ele/m)){
            pos=i;
            max=ceil(ele/m);
        }
    }
    cout<<pos;
}
 
int32_t main()
{
 fastIO
// testCases 
 solve();
}